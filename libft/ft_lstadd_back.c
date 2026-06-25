/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 07:35:15 by cmichele          #+#    #+#             */
/*   Updated: 2026/06/26 07:35:47 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *nw)
{
	t_list	*tmp;

    if (*lst == NULL)
    {       
        *lst = nw;
        return ;
    }
	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = nw;
}
