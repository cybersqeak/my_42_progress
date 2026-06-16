#include <stdio.h>
#include "libft.h" 
t_list  *ft_lstlast(t_list *lst)
{
    t_list *temp = lst;
    t_list *return_address = NULL;
    while (temp != NULL)
    {
        return_address = temp;
        temp = temp->next;
    }
    return (return_address);
}


// is it provided that i know how t_list structs? if not 
// i wouldnt do lst->next ... but stucked...
int main(void)
{
    char str[] ="hello";

    t_list *s1;
    s1 = ft_lstnew(str);
    printf("the last node of s1 is %p\n", ft_lstlast(s1));
    printf("the above should be same as s1's address : %p\n :",s1);
    char str1[] ="world";

    t_list *s2;
    s2 = ft_lstnew(str1);
    s1->next = s2;
    printf("the  last node of s1 is %p\n", ft_lstlast(s1));
    printf("it should be as the  address of s2 is %p\n",s2);
    return (0);
}


