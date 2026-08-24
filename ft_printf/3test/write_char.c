#include "ft_printf.h"

int write_char(char *c)
{
    return write(1,c,1);
}

