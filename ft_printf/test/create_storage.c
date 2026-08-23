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
	int i = 0;
	int  *index = &i;
	int insidents_index = 0;
	int c;

	while (info->format[*index] != '\0')
	{
		if (info->format[*index] == '%')
		{
				c = check_indent(info->format[(*index)+1]);
				if (c != 0 && c != ERROR)	
					info->insidents[insidents_index++] = c, (*index)++;
				else 
					return ERROR; //input error 	
		}
		(*index)++;
	}
	return 1;	
}


