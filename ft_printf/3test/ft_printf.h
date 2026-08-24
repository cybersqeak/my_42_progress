#ifndef FT_PRINTF
#define	FT_PRINTF

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>	
#include <stdlib.h>

#define ERROR -1
int check_specifier(const char c);
int ft_printf(const char *format,...);




int writing(const char *str,int *index,int *specifier);




int write_char(char *c);
#endif
