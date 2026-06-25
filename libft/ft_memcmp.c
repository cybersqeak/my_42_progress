/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 07:39:46 by cmichele          #+#    #+#             */
/*   Updated: 2026/06/26 07:39:50 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*converted_s1;
	unsigned char	*converted_s2;
	size_t			index;

	converted_s1 = (unsigned char *)s1;
	converted_s2 = (unsigned char *)s2;
	index = 0;
	if (n == 0)
		return (0);
	while (index < n)
	{
		if (converted_s1[index] != converted_s2[index])
			return (converted_s1[index] - converted_s2[index]);
		index++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	*str1 = "helloworld";
	const char	*str2 = "helloworld";

	printf("the return (value of my memcmp :%d\n", ft_memcmp(str1, str2, 50));
	printf("the return (value of real memcmp :%d\n", memcmp(str1, str2, 50));
		// if i put n value minus. the complier detect it, but not on mine...
	return (0);
}*/
