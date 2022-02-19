#include "libft.h"

/*
** p1 = La chaine a itérer.		p2 = La fonction à appeler.
** Applique la fonction f à chaque caractère de la chaine de caractères passée.
** Chaque caractère est passé par adresse à la fonction f
** afin de pouvoir être modifié si nécéssaire.
*/

void	ft_striter(char *s, void (*f)(char *))
{
	int n;
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	n = ft_strlen(s);
	while (i < n)
	{
		f(&s[i]);
		i++;
	}
}
