#include "ft_printf.h"

    int writing(const char *str, int *index, int *specifier)
{
    int i = *index;
    int bytes = 0;
    while (str[i])
    {
        if (str[i] == '%')
        {
           // fprintf(stderr, "before check_specifier, index+1 is %d\n", i+ 1);
            *specifier = check_specifier(str[i + 1]);
            if (*specifier != NONE)
            {
              //  fprintf(stderr, "\nabout to break\n");
                i++;
                *index = i;
                break;
            }
        }
        bytes += write(1, &str[i], 1);   // print exactly once, real output only
        (i)++;
    }
    *index = i;
    return bytes;
}
       

int ft_printf(const char *format,...)
{
    int i = 0;
    int s = 0;
    int *index = &i;
    int bytes = 0;
    int *specifier = &s;
    int l = 1;
    va_list args;
    printf("\nstart!\n\n");
    va_start(args,format);
     
//    printf("va_args is %c\n",va_arg(args,int ));
 //   printf("va_args is %c\n",va_arg(args,int  ));
   // printf("va_args is %p\n",va_arg(args,void*));
   

    while (format[*index] != '\0') 
    {
        bytes += writing(format,index,specifier);
        if (*specifier == 'c')
            bytes += write_char(va_arg(args,int),index);
        else if (*specifier == 's')
            bytes += write_str(va_arg(args,char*),index);
        else if (*specifier == 'p')
            bytes +=  pointer_write(va_arg(args,void*),index);
        else if (*specifier == 'd' || *specifier == 'i')
            bytes += write_digits(va_arg(args,int),index);
        else if (*specifier == 'u')
            bytes += unsigned_write(va_arg(args,unsigned int),index);
        else if (*specifier == 'x')
            bytes +=  hex_write(va_arg(args,unsigned int),index);
        else if (*specifier == 'X')
            bytes += HEX_write(va_arg(args,int),index);
        else if (*specifier == '%')
            bytes += per_write(index); 
        *specifier = 0;
        l++;
    }
    va_end(args);



















    printf("\nends here with index %d\n",*index);
    printf("last specifier was %c\n",(char)*specifier);
    printf("\nthe end\n\n");
    return bytes;
}


