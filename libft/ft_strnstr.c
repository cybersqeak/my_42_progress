/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 07:47:18 by cmichele          #+#    #+#             */
/*   Updated: 2026/06/26 07:47:29 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	B_index;
	size_t	L_index;

	if (little[0] == '\0')
		return ((char *)big);
	B_index = 0;
	while (B_index < len && big && big[B_index])
	{
		L_index = 0;
		while (B_index + L_index < len && big[B_index
			+ L_index] == little[L_index])
		{
			L_index++;
			if (little[L_index] == '\0')
				return ((char *)&big[B_index]);
		}
		B_index++;
	}
	return (NULL);
}
