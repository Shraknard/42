#include "libft.h"

void	ft_putendl(char const *s)
{
	if (s)
	{
		ft_putstr((char *)s);
		ft_putchar('\n');
	}
}
