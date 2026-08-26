/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:48:03 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/26 11:49:46 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
       


