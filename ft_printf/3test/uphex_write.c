/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HEX_write.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:47:10 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/27 08:30:30 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	whex(unsigned int x, int *bytes)
{
	const char	*hexa = "0123456789ABCDEF";

	if (x / 16 > 15)
	{
		whex(x / 16, bytes);
		(*bytes) += write(1, hexa + (x % 16), 1);
		return (1);
	}
	(*bytes) += write(1, hexa + (x / 16), 1);
	(*bytes) += write(1, hexa + (x % 16), 1);
	return (1);
}

int	uph_w(unsigned int x, int *index)
{
	int	b;
	int	*bytes;

	b = 0;
	bytes = &b;
	(*index)++;
	whex(x, bytes);
	return (*bytes);
}
