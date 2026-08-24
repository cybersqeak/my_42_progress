#include "ft_printf.h"

int write_spe(const char c, void *args_value)
{
    if (check_specifier(c) == 'c')
        return write_char(c,(char*)args_value);
        
