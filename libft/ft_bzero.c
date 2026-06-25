#include <stdint.h>
#include <stdio.h>

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
