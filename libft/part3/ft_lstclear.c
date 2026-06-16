#include <stdlib.h>
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    if (*lst == NULL || del == NULL)
       return ; 
    t_list *current_node = *lst;
   t_list *tmp  = (*lst)->next;
//    int count_node_to_delete = 0;
    while (current_node != NULL)
    {
       // count_node_to_delete++;
        tmp = current_node->next;
        (*del)(current_node->content);
        free(current_node);
        current_node = tmp;
        //find_NULL = find_NULL->next; 
    }
    *lst = NULL;  // i dont understand  why i i have to do this  ...
}
    


