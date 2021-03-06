#include "libft.h"

/*
** Normal swap but working one
*/

void	swaaap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
** Sort a tab by ASCII
*/

char	**sort_ascii(char **tab)
{
	int	k;
	int	ok;

	k = 0;
	ok = 0;
	if (!tab)
		return (NULL);
	while (tab[k + 1])
	{
		if (ft_strcmp(tab[k], tab[k + 1]) > 0)
		{
			swaaap(&tab[k], &tab[k + 1]);
			k = 0;
		}
		k++;
		if (!tab[k + 1] && !ok)
		{
			k = 0;
			ok = 1;
		}
	}
	tab[k + 1] = NULL;
	return (tab);
}
