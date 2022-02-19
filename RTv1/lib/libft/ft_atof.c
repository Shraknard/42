#include "libft.h"
#include <math.h>

double		ft_atof(char *s)
{
	int		i;
	int		j;
	double	res;

	res = (double)atoi(s);
	if (ft_strchr(s, '.') && (i = ft_strchr(s, '.') - s) != 0)
	{
		j = 1;
		while (s[++i] && ft_isdigit(s[i]))
		{
			res += (res >= 0) ? ((double)(s[i] - '0') * pow(10, 0 - j)) :
				-1.0 * ((double)(s[i] - '0') * pow(10, 0 - j));
			j++;
		}
	}
	return (res);
}
