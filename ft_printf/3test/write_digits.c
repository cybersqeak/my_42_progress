/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_digits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:48:00 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/28 11:52:20 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void d_w(int d, t_info *info)
{
	char	*tmp;
	int		pre_bytes;

	pre_bytes = *(info->bytes);
	*(info->index)++;
	tmp = ft_itoa(d);
	if (!tmp)
	{
		info->error_flag = -1;
		return ;
	}
	*(info->bytes) += write(1, tmp, ft_strlen(tmp));
	free(tmp);
	if (*(info->bytes) < pre_bytes)
		info->error_flag = -1;
}
