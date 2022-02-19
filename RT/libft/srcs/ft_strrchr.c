#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *ptr;

	ptr = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			ptr = (char *)s;
		s++;
	}
	if (*s == c)
		ptr = (char *)s;
	return (ptr);
}
