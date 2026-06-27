/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 07:44:46 by cmichele          #+#    #+#             */
/*   Updated: 2026/06/28 06:22:41 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	copy(char *dst, const char *src, size_t current_index)
{
	size_t	index;

	index = 0;
	while (src[index])
	{
		dst[current_index] = src[index];
		current_index++;
		index++;
	}
	return (current_index);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	size_t	new_elements;
	size_t	index_for_newstr;

	index_for_newstr = 0;
	if (!s1 || !s2)
		return (NULL);
	new_elements = ft_strlen(s1) + ft_strlen(s2) + 1;
	new_string = malloc(new_elements);
	if (!new_string)
		return (NULL);
	index_for_newstr = copy(new_string, s1, index_for_newstr);
	index_for_newstr = copy(new_string, s2, index_for_newstr);
	new_string[index_for_newstr] = '\0';
	return (new_string);
}
/*
int	main(void)
{
	const char	s1[6] = " ";
	const char	s2[6] = "hello";
	char		*newstr;

	newstr = ft_strjoin(s1,s2);
	printf("the new string is : %s\n",newstr);
	printf("the sizeof s1 is : %zu\n", sizeof(s1));
	printf("the sizeof s2 is : %zu\n", sizeof(s2));
	free(newstr);
	return (0);
}


*/
