#include "libft.h"

/*
** BZERO
*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s2;
	size_t			i;

	i = 0;
	s2 = s;
	while (i < n)
	{
		s2[i] = '\0';
		i++;
	}
}
