#include "ft_printf.h"

int check_specifier(const char c)
{

    printf("\n in check_specifier  %c\n",c);
	if (c == 'c')
		return(int)'c';
	else if (c == 's')
		return (int)'s';
	else if (c == 'p')
		return (int)'p';
	else if (c == 'd')
		return (int)'d';
	else if (c == 'i')
		return (int)'i';
	else if (c == 'u')
		return (int)'u';
	else if (c == 'x')
		return (int)'x';
	else if (c == 'X')
		return (int)'X';
	else if (c == '%')
		return (int)'%';
	else  
		return ERROR;
}


