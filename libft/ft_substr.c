/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 08:58:25 by cmichele          #+#    #+#             */
/*   Updated: 2026/06/26 08:58:26 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*sub;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
int	main(void)
{
	char	*s;

	s = ft_substr("Hello World", 0, 5);
	printf("1: [%s]\n", s);
	free(s);
	s = ft_substr("Hello World", 6, 5);
	printf("2: [%s]\n", s);
	free(s);
	s = ft_substr("Hello World", 3, 20);
	printf("3: [%s]\n", s);
	free(s);
	s = ft_substr("Hello World", 11, 5);
	printf("4: [%s]\n", s);
	free(s);
	s = ft_substr("Hello World", 50, 5);
	printf("5: [%s]\n", s);
	free(s);
	s = ft_substr("", 0, 5);
	printf("6: [%s]\n", s);
	free(s);
	s = ft_substr("", 100, 5);
	printf("7: [%s]\n", s);
	free(s);
	s = ft_substr("A", 0, 1);
	printf("8: [%s]\n", s);
	free(s);
	s = ft_substr("A", 1, 1);
	printf("9: [%s]\n", s);
	free(s);
	s = ft_substr(NULL, 0, 5);
	printf("10: %p\n", (void *)s);
	return (0);
}*/
