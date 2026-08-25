#include "ft_printf.h"

    int writing(const char *str, int *index, int *specifier)
{
    int i = *index;
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
        write(1, &str[i], 1);   // print exactly once, real output only
        (i)++;
    }
    *index = i;
    return 1;
}
       

int ft_printf(const char *format,...)
{
    int i = 0;
    int s = 0;
    int *index = &i;
    int output_bytes = 0;
    int *specifier = &s;
    va_list args;
    va_start(args,format);
     
//    printf("va_args is %c\n",va_arg(args,int ));
 //   printf("va_args is %c\n",va_arg(args,int  ));
   // printf("va_args is %p\n",va_arg(args,void*));
    while (format[*index] != '\0') 
    {
        writing(format,index,specifier);
        if (*specifier == 'c')
            write_char(va_arg(args,int),index);
        else if (*specifier == 's')
            write_str(va_arg(args,char*),index);
       // else if (*specifier == 'p')
        //    write_pointer(va_arg(args,void*),index);
         else if (*specifier == 'd' || *specifier == 'i')
            write_digits(va_arg(args,int),index);
      /*  else if (*specifier == 'u')
            unsigned_write(va_arg(args,unsigned int),index);
       else if (*specifier == 'x')
            write_hex(va_arg(args,int)); // int? i need to check that later 
        else if (*specifier == 'X')
            write_HEX(va_arg(args,int));*/
        else
        {   
            (*index)++; 
            write(1,"%",1);
        }
    }
    va_end(args);
    printf("\nends here with index %d\n",*index);
    printf("last specifier was %c\n",(char)*specifier);
    return 1;
}


