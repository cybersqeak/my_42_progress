/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:47:57 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/28 11:41:59 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	s_w(const char *str, t_info *info)
{
	int	pre_bytes;

	pre_bytes = *(info->bytes);
	*(info->index)++;
	if (!str)
	{
		*(info->bytes) += write(1, "(null)", 6);
		if (*(info->bytes) < pre_bytes)
		{
			info->error_flag = -1;
			return;
		}
	}
	*(info->bytes) += write(1, str, ft_strlen(str));
	if (*(info->bytes) < pre_bytes)
		info->error_flag = -1;
}

void	c_w(int c, t_info *info)
{
	int	pre_bytes;

	pre_bytes = *(info->bytes);
	*(info->index)++;
	*(info->bytes) += write(1, &c, 1);
	if (*(info->bytes) < pre_bytes)
		info->error_flag = -1;
}
