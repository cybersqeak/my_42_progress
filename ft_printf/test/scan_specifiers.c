#include "header.h"

int count_specifier(t_info *info)
{
	int i = 0;
	
    int  *index = &i;
	int c;

	info->count = 0; 
	
	while (info->format[*index] != '\0')
	{
		if (info->format[*index] == '%')
		{
				printf("inside index + 1 is; %c, %d\n\n\n",info->format[(*index)+1],info->format[(*index)+1]);
				c = check_specifier(info->format[(*index)+1]);
				if (c != 0 && c != ERROR)	
					info->specifier_count++, (*index)++;	
				else 
					return ERROR; //input error	
		}
		(*index)++;
	
    }
    info->count = *index;//total format length
	return 1;	
}

int scan_specifiers(t_info *info)
{
	if (count_specifier(info) != ERROR)
		if (assign_specifiers(info) != ERROR)
				return 1; //succuess 
	return ERROR;
}
