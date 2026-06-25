
// C program to demonstrate working of memset()
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*str;
	size_t				i;

	str = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	words[20];
	char	words2[20];

	int rep = 65; // that's ascii A
	memset(words, rep, sizeof(words));
	ft_memset(words2, rep, 25 * sizeof(char));
	printf("Array aftr memset()\n");
	printf("%s\n", words);
	printf("%s\n", words2);
	return (0);
}*/
