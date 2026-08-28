/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_write.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:47:00 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/28 16:23:44 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	write_hex(unsigned int x, t_info *info)
{
	const char	*hexa = "0123456789abcdef";
	int			pre_bytes;

	pre_bytes = *(info->bytes);
	if (x >= 16)
		write_hex(x / 16, info);
	*(info->bytes) += write(1, hexa + (x % 16), 1);
	if (*(info->bytes) < pre_bytes)
		info->error_flag = -1;
}

void	h_w(unsigned int x, t_info *info)
{

	*(info->index) = *(info->index) + 1;
	write_hex(x, info);
	*(info->specifier) = NONE;
}
