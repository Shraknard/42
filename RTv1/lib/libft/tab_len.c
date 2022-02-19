#include "libft.h"

/*
** donne le nombre de str dans un char**
*/

int		tab_len(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}
