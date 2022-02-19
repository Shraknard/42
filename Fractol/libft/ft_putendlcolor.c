#include "libft.h"

void	ft_putendlcolor(char *str, char *color)
{
	ft_putstr(color);
	ft_putstr(str);
	ft_putchar('\n');
	ft_putstr(RESET);
}
