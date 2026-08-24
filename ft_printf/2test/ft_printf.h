#ifndef FT_PRINTF
#define	FT_PRINTF

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>	
#include <stdlib.h>

#define ERROR -1
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



int write_spe(const char c, void *args);
#endif
