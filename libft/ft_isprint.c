/*#include <stdio.h>
#include <ctype.h>

*/
int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	return (0);
}

/*
int	main(void)
{
	int	c;

	c = 33;
	printf("%d\n",ft_isprint(c));
	printf("%d\n",isprint(c));
	return (0);
}
*/
