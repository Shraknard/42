#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;
	t_list	*lst2;

	lst = *alst;
	if (!lst)
		return ;
	while (lst)
	{
		lst2 = lst->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = lst2;
	}
	*alst = NULL;
}
