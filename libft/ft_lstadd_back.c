#include "libft.h"
#include <stdio.h>

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
	// wtf is different between *lst ->next and temp -> next
}
