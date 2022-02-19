#include "libft.h"

/*
** Return a str with a repetition of n char c
*/

char	*repeat(int n, char c)
{
	char *str;

	str = ft_strnew(n);
	while (n >= 0)
		str[n--] = c;
	return (str);
}
