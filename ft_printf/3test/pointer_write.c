/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_write.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:47:33 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/27 08:29:48 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	whex(unsigned long long p, int *bytes)
{
	const char	*hexa = "0123456789abcdef";

	if (p / 16 > 15)
	{
		whex(p / 16, bytes);
		(*bytes) += write(1, hexa + (p % 16), 1);
		return (1);
	}
	(*bytes) += write(1, hexa + (p / 16), 1);
	(*bytes) += write(1, hexa + (p % 16), 1);
	return (1);
}

int	p_w(void *ptr, int *index)
{
	unsigned long long	p;
	int					b;
	int					*bytes;

	p = (unsigned long long)ptr;
	b = 0;
	bytes = &b;
	(*index)++;
	(*bytes) += write(1, "0x", 2);
	whex(p, bytes);
	return (*bytes);
}
