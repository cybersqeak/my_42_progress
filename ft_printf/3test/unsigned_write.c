/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_write.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:47:36 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/27 08:31:20 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	u_w(unsigned int i, int *index)
{
	char	*tmp;
	int		c;

	tmp = unsigneditoa(i);
	(*index)++;
	c = write(1, tmp, ft_strlen(tmp));
	free(tmp);
	return (c);
}
