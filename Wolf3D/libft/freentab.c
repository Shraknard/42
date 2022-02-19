#include "libft.h"

void	freentab(void **tab, int n)
{
	void	**tmp;

	if (n < 0 || !tab)
		return ;
	tmp = (void **)tab;
	while (n--)
	{
		if (tmp)
			ft_memdel(tmp);
		tmp++;
	}
	free(tab);
}
