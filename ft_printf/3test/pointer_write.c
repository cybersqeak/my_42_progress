/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_write.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:47:33 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/28 18:18:38 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	whex(unsigned long long p, t_info *info)
{
	const char	*hexa = "0123456789abcdef";
	int			pre_bytes;

	pre_bytes = *(info->bytes);
	if (p >= 16)
		whex(p >> 4, info);
	*(info->bytes) += write(1, &hexa[p & 15], 1);
	if (*(info->bytes) < pre_bytes)
		info->error_flag = -1;
}

void	p_w(void *ptr, t_info *info)
{
	unsigned long long	p;
	int					pre_bytes;

	pre_bytes = *(info->bytes);
	p = (unsigned long long)ptr;
	*(info->index) = *(info->index) + 1;
	if (!ptr)
	{
		*(info->bytes) += write(1, "(nil)", 5);
		if (*(info->bytes) < pre_bytes)
			info->error_flag = -1;
		*(info->specifier) = NONE;
		return ;
	}
	*(info->bytes) += write(1, "0x", 2);
	if (*(info->bytes) < pre_bytes)
	{
		info->error_flag = -1;
		return ;
	}
	whex(p, info);
	*(info->specifier) = NONE;
	return ;
}
