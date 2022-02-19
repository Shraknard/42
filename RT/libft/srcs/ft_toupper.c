#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_isalpha(c) && (c >= 'a' && c <= 'z'))
		c -= 32;
	return (c);
}
