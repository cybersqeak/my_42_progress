/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_write.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:47:36 by cmichele          #+#    #+#             */
/*   Updated: 2026/08/26 11:49:43 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int unsigned_write(unsigned int i, int *index)
{
    char *tmp = unsigneditoa(i);
    int c;
    (*index)++;
    c = write(1,tmp,ft_strlen(tmp));
    free(tmp);
    return c;
}

    
