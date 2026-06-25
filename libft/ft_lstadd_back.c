#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *nw)
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp != NULL)
		tmp = tmp->next;
	tmp->next = nw;
	// wtf is different between *lst ->next and temp -> next
}
