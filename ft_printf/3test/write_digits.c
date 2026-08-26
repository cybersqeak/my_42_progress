/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_digits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:48:00 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/26 11:49:46 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int write_digits(int d, int *index)
{
    char *tmp = ft_itoa(d);
    int c; 
    (*index)++;
    c = write(1,tmp,ft_strlen(tmp));
    free(tmp);
    return c;
}



