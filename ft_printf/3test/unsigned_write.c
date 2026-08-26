#include "ft_printf.h"

int unsigned_write(unsigned int i, int *index)
{
    char *tmp = unsigneditoa(i);
    int c;
    (*index)++;
    c = write(1,tmp,ft_strlen(tmp));
    free(tmp);
    return c;
}

    
