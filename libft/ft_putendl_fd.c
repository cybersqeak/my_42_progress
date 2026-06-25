#include "libft.h"
#include <stdint.h>
#include <unistd.h>


void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(1, "\n", 1);
}
/*
int	main(void)
{
	char	str[] = "helloworld";

	ft_putstr_fd(str,1);
	return (0);
}
*/
