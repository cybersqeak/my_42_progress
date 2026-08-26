/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_write.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:47:33 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/26 11:49:43 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int write_Lhex(unsigned long long p,int *bytes)
{
    const char *hexa = "0123456789abcdef";
    
    if (p / 16  > 15)
    {
        write_Lhex(p / 16,bytes);
        (*bytes) += write(1,hexa + (p % 16),1);
        return 1;
    }
   (*bytes) += write(1,hexa + (p / 16),1);
   (*bytes) += write(1,hexa + (p % 16),1);
   return 1;
}
int pointer_write(void *ptr, int *index)
{
    unsigned long long p = (unsigned long long)ptr;
    int b = 0;
    int *bytes = &b;
    
   (*index)++;
   (*bytes) += write(1,"0x",2);
    write_Lhex(p,bytes);  
   
   return *bytes;
}
