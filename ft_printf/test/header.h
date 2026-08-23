#ifndef HEADER_H
#define	HEADER_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>	
#include <stdlib.h>

#define ERROR -1
typedef struct s_info
{
	const char *format;
	char *insidents;
	int  count;
}t_info;

/* assign insidents (records) */

int create_storage(t_info *info);
int store_insidents(t_info *info);

/* check parameters */

int check_indent(const char c);
int count_parameter(t_info *info);
int check_parameter(t_info *info);

/* ft_printf functions */

int ft_printf(const char *format,...);

#endif 
