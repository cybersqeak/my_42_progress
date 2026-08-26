/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:47:57 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/26 11:49:45 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int write_str(char *str, int *index)
{
    (*index)++;
    return write(1,str,ft_strlen(str));
}

int write_char(int c, int *index)
{
    (*index)++;
    return write(1,&c,1);
}

