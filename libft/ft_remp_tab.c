#include "libft.h"

/*
** Rempli un tableau avec la chaine passé en param.
** Si la chaine est trop courte elle boucle dans le tableau.
*/

char	**ft_remp_tab(char **tab, int size, char *str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (!str)
		return (NULL);
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (k >= ft_strlen(str) - 1)
				k = 0;
			tab[i][j] = str[k];
			j++;
			k++;
		}
		tab[i][j] = '\0';
		i++;
	}
	return (tab);
}
