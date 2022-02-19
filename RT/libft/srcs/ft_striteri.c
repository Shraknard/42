#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;
	unsigned int len;

	if (s && f)
	{
		len = ft_strlen(s);
		i = 0;
		while (s && i < len)
		{
			f(i, s);
			s++;
			i++;
		}
	}
}
