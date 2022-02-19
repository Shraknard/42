#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (n && src[j] != '\0')
	{
		dst[i] = src[j];
		n--;
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}
