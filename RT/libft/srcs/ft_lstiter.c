#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*lst_next;

	while (lst)
	{
		lst_next = lst->next;
		f(lst);
		lst = lst_next;
	}
}
