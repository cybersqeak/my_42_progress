#include "ft_printf.h"

int write_str(char *str, int *index)
{
    (*index)++;
    return write(1,str,ft_strlen(str));
}

int write_char(int c, int *index)
{
    (*index)++;
    return write(1,&c,1);
}

