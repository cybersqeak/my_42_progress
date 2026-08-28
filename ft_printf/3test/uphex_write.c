/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uphex_write.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:47:10 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/28 16:23:43 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	whex(unsigned int x, t_info *info)
{
	int	pre_bytes = *(info->bytes);
	const char	*hexa = "0123456789ABCDEF";
	
	if (x >= 16)
		whex(x >> 4, info);
	*(info->bytes) += write(1, &hexa[x & 0xf], 1);
	if (*(info->bytes) < pre_bytes)
			info->error_flag = -1;

}

void	uph_w(unsigned int x, t_info *info)
{
	*(info->index) = *(info->index) + 1;
	whex(x, info);
	*(info->specifier) = NONE;
}
