#include "libft.h"

/*
** p1 = Chaine 1. 	p2 = Chaine 2. 	p3 = Le nombre de caractères à comparer.
** Compare lexicographiquement les deux chaines jusqu'à N caracteres.
** Ou la fin de la chaine. Return 1 si égales.
*/

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	if (ft_strncmp(s1, s2, n) == 0)
		return (1);
	return (0);
}
