#include "libft.h"

/*
** Free a tab
*/

void	free_tab(void **tab)
{
	char	**tmp;

	tmp = (char **)tab;
	while (*tmp)
	{
		if (tmp)
			ft_strdel(tmp);
		tmp++;
	}
	free(tab);
}
