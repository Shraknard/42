#include "libft.h"

/*
** Search the STR in the tab. return the pointer or NULL
*/

char	*search_tab(char **tab, char *str)
{
	int i;

	if (!tab || !str)
		return (NULL);
	i = -1;
	while (tab[++i])
	{
		if (!ft_strcmp(tab[i], str))
			return (tab[i]);
	}
	return (NULL);
}
