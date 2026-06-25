/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 07:31:20 by cmichele          #+#    #+#             */
/*   Updated: 2026/06/26 07:31:20 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (('0' <= c && c <= '9') || ('a' <= c && c <= 'z') || ('A' <= c
			&& c <= 'Z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int c = 1220;
	printf("%d\n",ft_isalnum(c));
	printf("%d",isalnum(c));
	return (0);
}*/
