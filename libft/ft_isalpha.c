//#include <ctype.h>
//#include <stdio.h>
int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	num;

	num = 95;
	printf("myfunc:%d\n",ft_isalpha(num));
	printf("func:%d",isalpha(num));
	return (0);
}

*/
