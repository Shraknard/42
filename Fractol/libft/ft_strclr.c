#include "libft.h"

/*
** p1 = La chaine à clear.
** Assigne la valeur ’\0’ à tous les caractères de la chaine passée en param.
*/

void	ft_strclr(char *s)
{
	if (s)
		ft_bzero(s, (int)ft_strlen(s));
}
