#include "libft.h"

/*
** p1 = L'adresse du pointeur
** La zone pointée doit être free, puis le pointeur est mis à NULL.
*/

void	ft_memdel(void **ap)
{
	if (ap && *ap)
	{
		free(*ap);
		*ap = NULL;
	}
}
