#include "libft.h"

void		ft_bubble_sort(int ac, char **av)
{
	int		sort;
	int		i;
	char	*tmp;

	sort = 1;
	while (sort == 1)
	{
		sort = 0;
		i = 1;
		while (i < ac - 1)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				tmp = av[i];
				av[i] = av[i + 1];
				av[i + 1] = tmp;
				sort = 1;
			}
			i++;
		}
	}
}
