#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (s2[k])
		k++;
	if (k == 0)
		return ((char *)s1);
	while (s1[i])
	{
		j = 0;
		while (s1[i + j] == s2[j])
		{
			if (j == (int)ft_strlen(s2) - 1)
				return ((char *)s1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
