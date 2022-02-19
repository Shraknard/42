#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*s2;

	s2 = (unsigned char *)s;
	i = 0;
	while (n != 0)
	{
		if (s2[i] == (unsigned char)c)
			return (&s2[i]);
		i++;
		n--;
	}
	return (NULL);
}
