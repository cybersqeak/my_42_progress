#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	index;
	size_t	src_length;

	index = 0;
	src_length = ft_strlen(src);
	if (size == 0)
		return (src_length);
	while (src[index] && index < size - 1)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (src_length);
}
/*
int	main(void)
{
	const char	*src = "hellothere";
	char		dest[11];

	printf("the return (value of real strlcpy is %zu\n", strlcpy(dest, src,
			11));
	printf("the return (value of fake strlcpy is %zu\n", ft_strlcpy(dest, src,
			11));
	return (0);
}*/
