#include "libft.h"

/*
** Pour copier un tableau dans un autre
*/

char	**ft_cp_tab(char **dst, char **src)
{
	int		i;

	i = 0;
	if (!src)
		return (NULL);
	while (src[i])
	{
		dst[i] = ft_strdup(src[i]);
		i++;
	}
	dst[i] = NULL;
	return (dst);
}
