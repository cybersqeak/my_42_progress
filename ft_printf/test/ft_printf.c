#include "header.h"

int ft_printf(const char *format,...)
{
	t_info info;
	
	info = (t_info){0};
	info.format = format;		

	if (check_parameter(&info) != ERROR)
	{	
		printf("check insidents in info.insidents [");
		for (int i = 0; i < info.count; i++)
			printf("%c ",info.insidents[i]);
		printf("]\n");
		return 1;	
	}
	return ERROR;
}


