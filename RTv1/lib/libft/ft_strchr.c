#include "libft.h"

/*
** Trouve la premiere occurence de c dans la chaine.
*/

char	*ft_strchr(const char *str, int c)
{
	int		i;
	int		n;
	char	*s;

	s = (char *)str;
	i = 0;
	n = ft_strlen(str);
	while (i < n + 1)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
