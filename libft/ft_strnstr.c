#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;
	int			k;

	i = 0;
	k = 0;
	if (s2[k])
		k++;
	if (k == 0)
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && i + j < n)
		{
			if (j == ft_strlen(s2) - 1)
				return ((char *)s1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
