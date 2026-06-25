/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 07:38:00 by cmichele          #+#    #+#             */
/*   Updated: 2026/06/26 07:38:02 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (!(tmp))
		return (NULL);
	(tmp->content) = content;
	tmp->next = NULL;
	return (tmp);
}
/*
int	main(void)
{
		struct s_list *x;
		x = malloc(sizeof(struct s_list));
		x->content = (char*)"cesare";


		printf("the inside of content %s\n",(char*)x->content);
		//    write(1,x->content,5);
		char str[] = "hello";
		printf("the inside of contnt is
			%s\n ",(char*)(ft_lstnew(str))->content);
		//printf("the inside of content %s\n",(char*)x->content);

 //       write(1,x->content,5);
		//char c[] = "a";
		// printf("the char is :%s\n",c);
		//printf("the char size is :%zu\n",sizeof(c));
		return (0);
} */
/*
int	main(void)
{
	char test[] ="hello";
	t_list *node;
	node = ft_lstnew(test);
	printf("the address of tmp is %p\n",node);
	printf("the address of tmp's content is %p\n",node->content);
	printf("the address of tmp's next is %p\n",node->next);
	return (0);
}*/
