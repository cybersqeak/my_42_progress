#include "header.h"

int	create_storage(t_info *info)
{
	char *insident_records;

	insident_records = malloc((info->count)*sizeof(char));
	if (!insident_records)
		return ERROR;
	info->insidents = insident_records;
	return 1;	
}



int store_insidents(t_info *info)
{
	size_t index = 0;
	size_t insidents_index = 0;
	int c;

	while (info->format[index] != '\0')
	{
		if (info->format[index] == '%')
		{
				c = check_indent(info->format[index+1]);
				if (c != 0 && c != ERROR)	
					info->insidents[insidents_index++] = c;	
				else 
					return ERROR; //input error 	
		}
		index++;
	}
	return 1;	
}


