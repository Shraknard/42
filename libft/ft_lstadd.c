#include "libft.h"

void	ft_lstadd(t_list **last, t_list *new)
{
	if (last && new)
	{
		new->next = *last;
		*last = new;
	}
}
