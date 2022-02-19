#include "libft.h"

void	ft_putstr(char *str)
{
	if (str)
		write(1, str, (int)ft_strlen(str));
}
