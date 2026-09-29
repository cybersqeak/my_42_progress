#include "header.h"

void store_specifier(t_info *info) { int i = 0;
	int  *index = &i;
	int specifier_index = 0;
	int c;

	while (info->format[*index] != '\0')
	{
		if (info->format[*index] == '%')
		{
				c = check_specifier(info->format[(*index)+1]);
				if (c != NONE)	
					info->specifiers[specifier_index++] = c, (*index)++;
		}
		(*index)++;
	}
    info->specifiers[specifier_index] = '\0';
}
int	assign_specifiers(t_info *info)
{
	char *specifier_records;

	specifier_records = malloc((info->count + 1)*sizeof(char));
	if (!specifier_records)
		return ERROR;
	info->specifiers = specifier_records;
    store_specifier(info);
    return 1;
}



