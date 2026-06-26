/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 07:35:52 by cmichele          #+#    #+#             */
/*   Updated: 2026/06/26 07:36:17 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_node;
	t_list	*tmp;

	if (*lst == NULL || del == NULL)
		return ;
	current_node = *lst;
	tmp = (*lst)->next;
	while (current_node != NULL)
	{
		tmp = current_node->next;
		(*del)(current_node->content);
		free(current_node);
		current_node = tmp;
	}
	*lst = NULL;
}
