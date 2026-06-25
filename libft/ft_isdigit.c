/*#include <ctype.h>
#include <stdio.h>

*/
int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}
/*int main() {
	char ch = 'i';
	printf("myfunc: %d",ft_isdigit(ch));
	printf("func: %d",isdigit(ch));

	return (0);
}*/
