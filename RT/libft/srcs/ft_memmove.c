#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	len--;
	if (dst >= src && dst <= src + len)
	{
		dst += len;
		src += len;
		while (len)
		{
			*(unsigned char *)dst-- = *(unsigned char *)src--;
			len--;
		}
		*(unsigned char *)dst = *(unsigned char *)src;
	}
	else
	{
		len++;
		dst = ft_memcpy(dst, src, len);
	}
	return (dst);
}
