#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	first = NULL;
	while (lst)
	{
		// 1. 先に新しいコンテンツを作る
		new_content = (*f)(lst->content);
		// 2. 新しいノードを作る
		new = ft_lstnew(new_content);
		if (!new)
		{
			// mallocに失敗した場合、今作ったコンテンツを即座に解放！
			(*del)(new_content);
			// それまでに作ったリストもすべて解放（ft_lstclearを活用）
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
