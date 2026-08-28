/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_specifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:48:13 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/28 18:00:08 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_specifier(const char c)
{
	if (c == 'c')
		return ('c');
	else if (c == 's')
		return ('s');
	else if (c == 'p')
		return ('p');
	else if (c == 'd')
		return ('d');
	else if (c == 'i')
		return ('i');
	else if (c == 'u')
		return ('u');
	else if (c == 'x')
		return ('x');
	else if (c == 'X')
		return ('X');
	else if (c == '%')
		return ('%');
	else
		return (NONE);
}
