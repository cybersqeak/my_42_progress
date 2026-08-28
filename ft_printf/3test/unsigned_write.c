/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_write.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:47:36 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/28 16:25:02 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	u_w(unsigned int i, t_info *info)
{
	char	*tmp;
	int		pre_bytes;

	pre_bytes = *(info->bytes);
	tmp = unsigneditoa(i);
	*(info->index) = *(info->index) + 1;
	*(info->bytes) += write(1, tmp, ft_strlen(tmp));
	free(tmp);
	if (*(info->bytes) < pre_bytes)
		info->error_flag = -1;
	*(info->specifier) = NONE;
}
