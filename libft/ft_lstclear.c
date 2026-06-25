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
	//    int count_node_to_delete = 0;
	while (current_node != NULL)
	{
		// count_node_to_delete++;
		tmp = current_node->next;
		(*del)(current_node->content);
		free(current_node);
		current_node = tmp;
		// find_NULL = find_NULL->next;
	}
	*lst = NULL; // i dont understand  why i i have to do this  ...
}
