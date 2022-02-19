#include "libft.h"

double	ft_pow(int n, int pow)
{
	int		i;
	double	res;
	int		neg;

	i = 0;
	neg = 0;
	res = n;
	if (n == 0)
		return (0);
	else if (pow == 0)
		return (1);
	else
	{
		if (pow < 0)
		{
			neg = 1;
			pow *= -1;
		}
		while (++i < pow)
		{
			res *= n;
		}
		return (res = (neg == 0) ? res : 1.0 / res);
	}
}
