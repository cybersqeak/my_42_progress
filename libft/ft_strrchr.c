/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 07:47:45 by cmichele          #+#    #+#             */
/*   Updated: 2026/06/26 07:48:21 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int chr)
{
	size_t	i;
	char	*set_pointer;

	i = 0;
	set_pointer = NULL;
	while (string[i] != '\0')
	{
		if (string[i] == (char)chr)
			set_pointer = (char *)&string[i];
		i++;
	}
	if (string[i] == (char)chr)
		set_pointer = (char *)&string[i];
	return (set_pointer);
}
/*
int	main(void)
{
	const char	string[10] = "aBaaBa";
	int			c;

	c = 0; // char ;
	printf("addresss of %s:\n ", string);
	for (size_t i = 0; i < sizeof(string); i++)
	{
		printf("%p, ", &string[i]);
	}
	printf("\n\n\nthe return (pointer from my strrchr : %p\n",
		ft_strrchr(string, c)));
	printf("the return (pointer from real strrchr : %p\n\n\n\n\n\n\n",
		strrchr(string, c)));
	for (size_t i = 0; i < sizeof(string); i++)
	{
		printf("%zu, ", sizeof(string[i]));
	}
	printf("\n\n\n\n");
	for (size_t i = 0; i < sizeof(string); i++)
	{
		printf("%c:", string[i]);
	}
	return (0);
}*/
