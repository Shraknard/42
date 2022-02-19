#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*dst2;
	unsigned char	*src2;
	unsigned char	c2;
	int				i;

	i = 0;
	c2 = (unsigned char)c;
	dst2 = (char *)dst;
	src2 = (unsigned char *)src;
	while (i < (int)n)
	{
		dst2[i] = src2[i];
		if (src2[i] == c2)
			return (&dst2[i + 1]);
		i++;
	}
	return (NULL);
}
