/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 07:36:36 by cmichele          #+#    #+#             */
/*   Updated: 2026/06/26 07:36:42 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*
void	del(void *node)
{
	free(node);
}
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	(*del)(lst->content);
	free(lst);
}
/*
int	main(void)
{
	char	*str;

	str = malloc(sizeof(char)*6);
	strcpy(str,"hello");
   t_list *list =  ft_lstnew(str); // I create new list with content of str.
  //  printf("the content_address of list is (must be exist) : %p\n",
	list->content);
	ft_lstdelone(list,del);
   // printf("the content_address of list is (must not  be exist) : %p\n",
	list->content); // well it turn out to be existed ,
	but this is called dangling pointer...  a pointer that points to a memory location that has been deleted,
	freed, or has gone out of scope
	//printf("the Node of list is (must not be exist) : %p\n",
		list);// same here dangling pointer.
	list = NULL;// for safety not assign anything later.
	//list->content = NULL;
	//printf("the content_address of list is (must be nonexist) : %p",
		list->content);
	return (0);
}
*/
