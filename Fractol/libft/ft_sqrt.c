#include "libft.h"

int		ft_sqrt(int nb)
{
	int	prime;
	int	i;

	prime = 1;
	i = 0;
	while (prime < nb)
	{
		i++;
		prime = i * i;
	}
	return (i);
}
