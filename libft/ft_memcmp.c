#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	int				r;
	unsigned char	*ss1;
	unsigned char	*ss2;

	i = 0;
	r = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (i < n && r == 0)
	{
		r = (int)(ss1[i] - ss2[i]);
		i++;
	}
	return (r);
}
