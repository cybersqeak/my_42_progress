#include "ft_printf.h"

int ft_printf(const char *format,...)
{
      int index = 0;
      int output_bytes = 0;
      int c;
      va_list args;

      while (format[index])
      {
          if (format[index] == '%')
          {
              c = check_specifier(format[index+1]);
              if (c != ERROR)
              {
                  output_bytes += write_spe(c,va_start(args,choose_type(c)));
                  index++;
              }
              else 
                  return ERROR;
          }
          else  
                output_bytes += write(1,&format[index],1);
         
           index++;
      }
          return (output_bytes);
}
