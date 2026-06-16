#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *tmp = lst;
    while (tmp != NULL)
    {
        (*(*f))(tmp->content);
        tmp = tmp->next;
    }
// i dont know what to do...
}

