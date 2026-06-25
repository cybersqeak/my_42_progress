/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 07:43:13 by cmichele          #+#    #+#             */
/*   Updated: 2026/06/26 07:43:17 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	numchr;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = nb * (-1);
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
	}
	numchr = (char)(nb % 10) + '0';
	write(fd, &numchr, 1);
}
/*
int	main(void)
{
	int	num;
	int	fd;

	num = 2147483647;
	fd = 1;
	ft_putnbr_fd(num, fd);
	return (0);
}*/
