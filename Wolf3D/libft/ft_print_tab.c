#include "libft.h"

/*
** Affiche un tableau
*/

void	ft_print_tab(char **str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putendl(str[i++]);
}
