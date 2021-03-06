#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (!n)
		return (ft_strlen(dst));
	while (dst[i] != '\0' && i < n)
		i++;
	k = i;
	while (src[i - k] != '\0' && i < n - 1)
	{
		dst[i] = src[i - k];
		i++;
	}
	if (i < n)
		dst[i] = '\0';
	return (k + ft_strlen((char *)src));
}
