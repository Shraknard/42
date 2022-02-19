#include "libft.h"

int	ft_tolower(int c)
{
	if (ft_isalpha(c) && (c >= 'A' && c <= 'Z'))
		c += 32;
	return (c);
}
