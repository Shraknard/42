#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*dst2;
	char	*src2;

	i = 0;
	dst2 = (char *)dst;
	src2 = (char *)src;
	while (n != 0)
	{
		dst2[i] = src2[i];
		n--;
		i++;
	}
	return (dst2);
}
