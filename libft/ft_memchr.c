/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 07:38:27 by cmichele          #+#    #+#             */
/*   Updated: 2026/06/26 07:50:44 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*check;
	size_t			index;
	unsigned char	k;

	check = (unsigned char *)s;
	index = 0;
	k = (unsigned char)c;
	while (index < n)
	{
		if (check[index] == k)
			return ((void *)&check[index]);
		index++;
	}
	return (NULL);
}
/*
int	main(void)
{
	int	c;

	const char  string[6]="heAlo";
	c = 321; // char ;
	printf("addresss of %s:\n ",string);
	for (size_t i = 0; i < sizeof(string); i++)
	{
		printf("%p, ",&string[i]);
	}
   printf("\n\n\nthe return (pointer from my memchr :
	%p\n",ft_memchr(string,c,6)));
	printf("the return (pointer from real memchr :
		%p\n\n\n\n\n\n\n",memchr(string,c,6)));
		for (size_t i = 0; i < sizeof(string); i++)
	{
		printf("%zu, ",sizeof(string[i]));
	}
		printf("\n\n\n\n");
		for (size_t i = 0; i < sizeof(string); i++)
	{
		printf("%c:",string[i]);
	}
		printf("\n\n");
	return (0);
}
 */
