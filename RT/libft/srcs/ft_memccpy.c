#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*ptr_dst;
	unsigned char		*ptr_src;

	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	while (n--)
	{
		*ptr_dst = *ptr_src;
		if (*ptr_src == (unsigned char)c)
			return (ptr_dst + 1);
		ptr_dst++;
		ptr_src++;
	}
	return (NULL);
}
