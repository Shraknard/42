#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	len = ft_strlen(s) - 1;
	i = 0;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
		i++;
	while ((len > i) && (s[len] == '\t' || s[len] == '\n' || s[len] == ' '))
		len--;
	if (len <= i)
		return (ft_strnew(0));
	return (ft_strsub(s, i, len - i + 1));
}
