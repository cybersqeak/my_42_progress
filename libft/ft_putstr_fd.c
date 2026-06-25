#include <stdint.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
int	main(void)
{
	char	str[] = "helloworld";

	ft_putstr_fd(str,1);
	return (0);
}
*/
