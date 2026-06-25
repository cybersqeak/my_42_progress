/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 07:44:22 by cmichele          #+#    #+#             */
/*   Updated: 2026/06/26 07:44:28 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*duplicated_string;
	size_t	src_length;
	size_t	index;

	if (!src)
		return (NULL);
	src_length = ft_strlen(src);
	duplicated_string = malloc((src_length + 1));
	if (!(duplicated_string))
		return (NULL);
	index = 0;
	while (src[index])
	{
		duplicated_string[index] = src[index];
		index++;
	}
	duplicated_string[index] = '\0';
	return (duplicated_string);
}

/*
int	main(void)
{
	const char	src[6] = "hello";
	char		*addr;

	addr = ft_strdup(src);
	printf("the duplicated_string is : %s\n",addr);
	free(addr);
	return (0);
}

   */
