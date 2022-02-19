#include "libft.h"

/*
** Initialise le tableau.
*/

char	**ft_init_tab(int size)
{
	char	**tab;
	int		i;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * size + 1);
	while (i < size)
	{
		tab[i] = (char *)malloc(sizeof(char) * size + 1);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
