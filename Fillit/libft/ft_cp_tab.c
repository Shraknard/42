#include "libft.h"

/*
** Pour copier un tableau dans un autre
*/

char	**ft_cp_tab(char **tab, char **dst, int len)
{
	int		i;
	int		j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			dst[i][j] = tab[i][j];
			j++;
		}
		i++;
	}
	return (dst);
}
