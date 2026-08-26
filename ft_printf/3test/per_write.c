#include "ft_printf.h"

int per_write(int *index)
{
    (*index)++;

    return write(1,"%",1);
}
