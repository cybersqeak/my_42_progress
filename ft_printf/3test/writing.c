/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:48:03 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/28 17:03:09 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	writing(t_info *info)
{
	while (info->format[*(info->index)])
	{
		int pre_bytes = *(info->bytes);
		if (info->format[*(info->index)] == '%')
		{
			*(info->specifier) = check_specifier(info->format[*(info->index) + 1]);
			if (*(info->specifier) != NONE)
			{
				*(info->index) = *(info->index) + 1;
				break ;
			}
		}
		*(info->bytes) += write(1, &info->format[*(info->index)], 1);
		if (*(info->bytes) < pre_bytes)
		{
			info->error_flag = -1;
			return ;
		}
		*(info->index) = *(info->index) + 1;
	}
	return ;
}
