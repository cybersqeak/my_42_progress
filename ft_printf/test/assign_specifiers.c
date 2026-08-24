#include "header.h"

int store_specifier(t_info *info)
{
	int i = 0;
	int  *index = &i;
	int specifier_index = 0;
	int c;

	while (info->format[*index] != '\0')
	{
		if (info->format[*index] == '%')
		{
				c = check_specifier(info->format[(*index)+1]);
				if (c != 0 && c != ERROR)	
					info->specifiers[specifier_index++] = c, (*index)++;
				else 
					return ERROR; //input error 	
		}
		(*index)++;
	}
	return 1;	
}

int	assign_specifiers(t_info *info)
{
	char *specifier_records;

	specifier_records = malloc((info->count)*sizeof(char));
	if (!specifier_records)
		return ERROR;
	info->specifiers = specifier_records;
   return store_specifier(info);
}



