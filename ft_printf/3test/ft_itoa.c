/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:46:06 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/26 11:49:38 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

#define NEGATIVE -1

static char	*create_ascii(long n, int elements, int sign)
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
	index++;
	if (elements - index == 0 && sign == NEGATIVE)
	{
		ascii[elements - index] = '-';
		return (ascii);
	}
	return (ascii);
}

static char	*check_digits(int n)
{
	int		count;
	int		sign;
	long	set_n;
	long	num;

	num = (long)n;
	count = 0;
	sign = 1;
	if (num < 0)
	{
		count++;
		sign = NEGATIVE;
		num = (-1) * num;
	}
	set_n = num;
	while (num / 10 != 0)
	{
		count++;
		num = num / 10;
	}
	num = num / 10;
	count++;
	return (create_ascii(set_n, count, sign));
}

char	*ft_itoa(int n)
{
	return (check_digits(n));
}
