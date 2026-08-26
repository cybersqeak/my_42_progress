/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_digits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:48:00 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/27 08:30:44 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	d_w(int d, int *index)
{
	char	*tmp;
	int		c;

	tmp = ft_itoa(d);
	(*index)++;
	c = write(1, tmp, ft_strlen(tmp));
	free(tmp);
	return (c);
}
