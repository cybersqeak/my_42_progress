/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:48:03 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/27 07:12:34 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	writing(const char *str, int *index, int *specifier)
{
	int	i;
	int	bytes;

	i = *index;
	bytes = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			*specifier = check_specifier(str[i + 1]);
			if (*specifier != NONE)
			{
				i++;
				*index = i;
				break ;
			}
		}
		bytes += write(1, &str[i], 1);
		(i)++;
	}
	*index = i;
	return (bytes);
}
