/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 07:36:49 by cmichele          #+#    #+#             */
/*   Updated: 2026/06/26 09:04:45 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	f(void *content)
{
	t_list	*tmp;

	printf("the content address  of current Node is :%p\n", content);
	printf("the content address  of current Node is :%s\n", (char *)content);
		///  i write this because I know that i am using char * as an instance
}*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!lst || !f)
		return ;
	tmp = lst;
	while (tmp)
	{
		(*f)(tmp->content);
		tmp = tmp->next;
	}
}
/*
int	main(void)
{
	char	test[] = "hello";
	char	test1[] = "cesare";
	t_list	*s1;
	t_list	*s2;

	s1 = ft_lstnew(test);
	s2 = ft_lstnew(test1);
	s1->next = s2;
	ft_lstiter(s1, f);
	return (0);
}*/
