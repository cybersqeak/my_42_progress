#include "header.h"

int ft_printf(const char *format,...)
{
	t_info info;
	
	info = (t_info){0};
	info.format = format;		
    
    va_list args;
    va_start(args,format);
	if (scan_specifiers(&info) != ERROR) // end up with assigned_specifiers in info->specifiers indexs
        if (output_format(&info,args) != ERROR)
            return (write(1,info.output_format,info.count));

	return ERROR;
}


