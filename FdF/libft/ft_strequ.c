#include "libft.h"

/*
** p1 = Première chaine a comparer. 	p2 = 2eme chaine à comparer.
** Compare lexicographiquement les 2 chaines. Si elles sont égale, retourne 1.
*/

int		ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	return (0);
}
