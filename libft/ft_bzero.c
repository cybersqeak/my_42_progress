/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 07:29:13 by cmichele          #+#    #+#             */
/*   Updated: 2026/06/26 07:30:31 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t size)
{
	unsigned char	*converted_s;
	size_t			index;

	converted_s = (unsigned char *)s;
	index = 0;
	while (index < size)
	{
		converted_s[index] = 0;
		index++;
	}
}
/*
int	main(void)
{
	char	str[6];

	ft_bzero(str, 6);
	for (int i = 0; i < 6; i++)
	{
		printf("%c\n", str[i]);
	}
	return (0);
}*/
