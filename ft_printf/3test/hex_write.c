#include "ft_printf.h"

static int write_hex(unsigned int x,int *bytes)
{
    
    const char *hexa = "0123456789abcdef";

    if (x / 16 > 15)
    {
        write_hex(x / 16,bytes);
        (*bytes) += write(1,hexa + (x % 16),1);
        return 1;
    }
   (*bytes) += write(1,hexa+(x/16),1);
   (*bytes) += write(1,hexa+(x%16),1);
    return 1;
}

int hex_write(unsigned int x, int *index)
{
    int b = 0;
    int *bytes = &b;

    (*index)++;
    
    write_hex(x,bytes);
    return *bytes;
}

