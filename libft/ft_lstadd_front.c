#include <stdio.h>
#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *nw)
{
	if (nw == NULL)
		return ;
    nw->next = *lst;
    *lst = nw;
    return ;
}
/*
int main(void)
{
    char test1[] = "hello";
    char test2[] = "world";

    t_list *lst = ft_lstnew(test1);
    t_list *new = ft_lstnew(test2);
    ft_lstadd_front(&lst,new);
    printf("the head address of test1 is %p\n",(void*)test1);
    printf("the address of lst's content is %p\n",lst->content);
    printf("the address of new structure is %p\n",(void*)new);
    printf("the address of lst's next is %p\n",(void*)lst->next);
    printf("the head address of test2 is %p\n",(void*)test2);
    printf("the address of nw's next->content address is %p\n",new->next->content);
    printf("the address of nw's next->content->next is %p\n",(void*)new->next->next);
    

    return (0);

}
*/

