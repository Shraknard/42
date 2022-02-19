#include "libft.h"

/*
** trouve la derniere occurence de c dans la chaine.
*/

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	c2;
	char	*s;

	s = (char *)str;
	c2 = c;
	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i--;
	}
	return (NULL);
}
