/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 07:41:08 by cmichele          #+#    #+#             */
/*   Updated: 2026/06/26 07:41:31 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*str;
	size_t				i;

	str = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	words[20];
	char	words2[20];

	int rep = 65; // that's ascii A
	memset(words, rep, sizeof(words));
	ft_memset(words2, rep, 25 * sizeof(char));
	printf("Array aftr memset()\n");
	printf("%s\n", words);
	printf("%s\n", words2);
	return (0);
}*/
