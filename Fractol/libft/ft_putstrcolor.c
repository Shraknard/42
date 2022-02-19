#include "libft.h"

void	ft_putstrcolor(char *str, char *color)
{
	ft_putstr(color);
	ft_putstr(str);
	ft_putstr(RESET);
}
