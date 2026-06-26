/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 07:30:40 by cmichele          #+#    #+#             */
/*   Updated: 2026/06/26 07:31:00 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*
int	main(void)
{
	int* p1 = calloc(4, sizeof(int));
		// allocate and zero out an array of 4 int
	int* p2 = calloc(4, sizeof(int)); // same, naming the array type directly
	int* p3 = ft_calloc(4, sizeof(char));     // same,
		without repeating the type name

	if (p2)
	{
		for (int n = 0; n < 4; ++n) // print the array
		{
			printf("p2[%d] == %c ", n, p2[n]);
			printf("p2[%d] == %ld\n\n\n", n, sizeof(p2[n]));
		}
		for (int n = 0; n < 4; ++n)
		{
			printf("p3[%d] == %c ", n, p3[n]);
			printf("p3[%d] == %ld\n\n\n", n, sizeof(p3[n]));
		}

	}

	free(p3);
	free(p2);
	free(p1);
	for (int n = 0; n < 4; ++n)
		{
			printf("p3[%d] == %c ", n, p3[n]);
			printf("p3[%d] == %ld\n\n\n", n, sizeof(p3[n]));
		}


}*/
