/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 07:47:18 by cmichele          #+#    #+#             */
/*   Updated: 2026/06/26 10:25:53 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b_index;
	size_t	l_index;

	if (little[0] == '\0')
		return ((char *)big);
	b_index = 0;
	while (b_index < len && big && big[b_index])
	{
		l_index = 0;
		while (b_index + l_index < len && big[b_index
				+ l_index] == little[l_index])
		{
			l_index++;
			if (little[l_index] == '\0')
				return ((char *)&big[b_index]);
		}
		b_index++;
	}
	return (NULL);
}
