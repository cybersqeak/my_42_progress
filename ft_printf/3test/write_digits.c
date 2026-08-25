#include "ft_printf.h"


int write_digits(int d, int *index)
{
    char *tmp = ft_itoa(d);
    int c; 
    (*index)++;
    c = write(1,tmp,ft_strlen(tmp));
    free(tmp);
    return c;
}



