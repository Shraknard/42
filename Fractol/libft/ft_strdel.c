#include "libft.h"

/*
** p1 = L'adresse de la chaine à libérer.
** Free uen chaine de caractère et met son pointeur à NULL.
*/

void	ft_strdel(char **s)
{
	if (s && *s)
		ft_memdel((void **)s);
}
