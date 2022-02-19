#include "libft.h"

int		ft_lenlst(t_list *lst)
{
	int nb;

	nb = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		nb++;
	}
	return (nb);
}
