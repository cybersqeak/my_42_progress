#include "ft_printf.h"

int ft_strlen(const char *str)
{
    int count;

    count = 0;
    while (str[count])
        count++;
    return count;
}

