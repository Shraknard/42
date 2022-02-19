#include "libft.h"

void	ft_lstpush(t_list *lst, t_list new)
{
	while (lst->next)
		lst = lst->next;
	lst->next = new;
}
