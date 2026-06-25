/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 07:47:08 by cmichele          #+#    #+#             */
/*   Updated: 2026/06/26 07:47:10 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i] || s1[i] == '\0'
			|| s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char *str1= "hellow3rld";
	const char *str2 ="helloworld";
	printf("the return (value of my strncmp :%d\n",ft_strncmp(str1,str2,6)));
   printf("the return (value of real strncmp :%d\n",strncmp(str1,str2,6)));// if i put n value minus. the complier detect it,
	but not on mine...
	return (0);
}
*/
