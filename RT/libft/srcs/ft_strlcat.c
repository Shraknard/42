#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] != '\0' && dst_len + i < size - 1)
		{
			dst[i + dst_len] = src[i];
			i++;
		}
	}
	dst[i + dst_len] = '\0';
	if (dst_len < size)
		return (src_len + dst_len);
	else
		return (src_len + size);
}
