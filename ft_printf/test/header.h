#ifndef HEADER_H
#define	HEADER_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>	
#include <stdlib.h>

#define ERROR -1
#define NONE 33333
typedef struct s_info
{
	const char *format;
    char *output_format;
	char *specifiers;
	int  count;
    int specifier_count;
}t_info;

/* assign insidents (records) */

int assign_specifiers(t_info *info);
int store_insidents(t_info *info);

/* check specifiers */

int check_specifier(const char c);
int count_specifier(t_info *info);
int scan_specifiers(t_info *info);

/* ft_printf functions */

int ft_printf(const char *format,...);

int output_format(t_info *info,va_list args);
#endif 
