#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	size_t	str_len;
	int		nbr;

	nbr = n;
	str_len = 1;
	while (nbr /= 10)
		str_len++;
	nbr = n;
	if (n < 0)
	{
		nbr = -n;
		str_len++;
	}
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(str = (char *)malloc(sizeof(char) * str_len + 1)))
		return (NULL);
	str[str_len--] = '\0';
	str[str_len] = nbr % 10 + '0';
	while (nbr /= 10)
		str[--str_len] = nbr % 10 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
