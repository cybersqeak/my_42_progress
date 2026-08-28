/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   per_write.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:47:30 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/28 18:03:19 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	per_write(t_info *info)
{
	int	pre_bytes;

	pre_bytes = *(info->bytes);
	*(info->index) = *(info->index) + 1;
	*(info->bytes) += write(1, "%", 1);
	if (*(info->bytes) < pre_bytes)
		info->error_flag = -1;
	*(info->specifier) = NONE;
}
