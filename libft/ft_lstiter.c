#include <stdio.h>
#include "libft.h"
void    f(void *content)
{
    printf("the content address  of current Node is :%p\n",content);
    printf("the content address  of current Node is :%s\n",(char *)content);   ///  i write this because I know that i am using char * as an instance 
}
void    ft_lstiter(t_list *lst, void    (*f)(void *))
{
    t_list *tmp = lst;
    if (tmp == NULL)
        return ;
    while (tmp->next != NULL)
    {

        (*f)(tmp->content); // why do i have to use pointer ? instead of just use f(tmp->content)?? it's same right?
        tmp = tmp->next;
    }
    (*f)(tmp->content); // why do i have to use pointer ? instead of just use f(tmp->content)?? it's same right?
}



int main (void)
{
    char test[] = "hello";
    char test1[] = "cesare";

    t_list *s1 = ft_lstnew(test);
    t_list *s2 = ft_lstnew(test1);
    s1->next = s2;
    ft_lstiter(s1,f);
    return (0);
}
    
    


    
