/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:48:19 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/26 11:49:37 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format,...)
{
    int i = 0;
    int s = 0;
    int *index = &i;
    int bytes = 0;
    int *specifier = &s;
    va_list args;
   
    printf("\nstart!\n\n");
    va_start(args,format);
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
    }
    va_end(args);
    return bytes;
}


