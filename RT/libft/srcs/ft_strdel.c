#include "libft.h"

char	*ft_strdel(char **ass)
{
	if (!ass)
		return (NULL);
	ft_memdel((void **)ass);
	*ass = NULL;
	return (*ass);
}
