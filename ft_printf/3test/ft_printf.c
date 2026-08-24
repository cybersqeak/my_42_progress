
#include "ft_printf.h"

int writing(const char *str,int *index,int *specifier)
{

    while (str[*index])
    {
        if (str[*index] == '%')
        {
            printf("index +1  is %d\n",*index+1);
            *specifier= check_specifier(str[*index + 1]);
            if (*specifier != ERROR)
            {
                (*index)++;
                break;
            }
            else if (*specifier == ERROR)
            {
                printf("index + 1 is now %d\nspecifier detected %c\n",*index+1,str[*index + 1]);
                return ERROR;
            }
        }
        write(1,&str[*index],1);
        (*index)++;
    }
    return 1; 
        
}

int ft_printf(const char *format,...)
{
    int i = 0;
    int *index = &i;
    int output_bytes = 0;
    int *specifier = &i;
    va_list args;
    va_start(args,format);

    while (format[*index]) 
    {
        writing(format,index,specifier);
        if (*specifier == 'c')
            write_char(va_arg(args,char*));
        /*else if (*specifier == 's')
            write_str(va_arg(args,char*));
        else if (*specifier == 'p')
            write_pointer(va_arg(args,void*));
        else if (*specifier == 'd')
            write_digits(va_arg(args,int));
        else if (*specifier == 'i')
            write_ints(va_arg(args,int)); // whats is diff betw d and i ? 
        else if (*specifier == 'u')
            write_unsigned(va_arg(args,unsigned int));
        else if (*specifier == 'x')
            write_hex(va_arg(args,int)); // int? i need to check that later 
        else if (*specifier == 'X')
            write_HEX(va_arg(args,int));
        else 
            write(1,"%",1);*/
    }
    va_end(args);
    return 1;
}


