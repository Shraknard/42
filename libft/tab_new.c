#include "libft.h"

/*
** Init a new char* tab and set the size + 1 to NULL
*/

char	**tab_new(int size)
{
	char	**tab;
	int		i;

	i = 0;
	if (size <= 0)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) * size + 1)))
		return (NULL);
	while (i < size)
		tab[i++] = ft_strnew(0);
	tab[i] = NULL;
	return (tab);
}
