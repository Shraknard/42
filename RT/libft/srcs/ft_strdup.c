#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (str == 0)
		return (0);
	str = ft_strcpy(str, s1);
	return (str);
}
