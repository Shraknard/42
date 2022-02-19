#include "libft.h"

void	*ft_memalloc(size_t n)
{
	void	*s;

	if (!(s = (void *)malloc(n)))
		return (NULL);
	ft_memset(s, '\0', n);
	return (s);
}
