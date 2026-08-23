#include "header.h"

int count_parameter(t_info *info)
{
	
	size_t *index;
	int c;

	info->count = 0; 
	*index = 0;
	
	while (info->format[*index] != '\0')
	{
		if (info->format[*index] == '%')
		{
				printf("inside index + 1 is; %c\n\n\n",info->format[*index+1]);
				c = check_indent(info->format[*index+1]);
				if (c != 0 && c != ERROR)	
					info->count++;	
				else 
					return ERROR; //input error	
		}
		index++;
	}
	return (info->count);	
}

int check_parameter(t_info *info)
{
	if (count_parameter(info) != ERROR)
		if (create_storage(info) != ERROR)
			if (store_insidents(info) != ERROR)	
				return 1; //succuess 
	return ERROR;
}
