/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 07:38:07 by cmichele          #+#    #+#             */
/*   Updated: 2026/06/26 07:38:20 by cmichele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*now;

	count = 0;
	now = lst;
	while (now != NULL)
	{
		count++;
		now = now->next;
	}
	return (count);
}

/*
int	main(void)
{
	t_list	*test1;
	t_list	*test2;
	t_list	*test3;

	test1 = malloc(sizeof(t_list));
	test2 = malloc(sizeof(t_list));
	test3 = malloc(sizeof(t_list));
	if(!(test1) || !(test2) || !(test3))
		return (0);// stop the main!!
	test1->content = "hello";
	test2->content = "world";
	test3->content = "cesare";
	test1->next = test2;
	test2->next = test3;
	test3->next = NULL;
	printf("%d\n",ft_lstsize(test2));
	return (0);
}





*/
