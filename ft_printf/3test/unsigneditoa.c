/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigneditoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:47:40 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/28 18:00:45 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*create_ascii(long n, int elements)
{
	int		index;
	char	*ascii;

	ascii = malloc(sizeof(char) * (elements + 1));
	if (!ascii)
		return (NULL);
	index = 1;
	ascii[elements] = '\0';
	while (n / 10 != 0)
	{
		ascii[elements - index] = (char)(n % 10) + '0';
		n = n / 10;
		index++;
	}
	ascii[elements - index] = (char)(n % 10) + '0';
	return (ascii);
}

static char	*check_digits(unsigned int n)
{
	int		count;
	long	set_n;
	long	num;

	num = (long)n;
	count = 0;
	set_n = num;
	while (num / 10 != 0)
	{
		count++;
		num = num / 10;
	}
	num = num / 10;
	count++;
	return (create_ascii(set_n, count));
}

char	*unsigneditoa(unsigned int n)
{
	return (check_digits(n));
}
