/*#include <stdio.h>
#include <ctype.h>
*/
int ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}

/*
int main(void)
{
	int c = '0';

	printf("%d\n",ft_isascii(c));
	printf("%d\n",isascii(c));
	return (0);
}
*/
