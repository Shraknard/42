#include "libft.h"

/*
** p1 = La chaine a itérer.		p2 = La fonction à appeler et son index.
** Applique la fonction f à chaque caractère de la chaine de caractères passée
** en précisant son index Chaque caractère est passé par adresse
** à la fonction f afin de pouvoir être modifié si nécéssaire.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int				n;
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	if (!s || !f)
		return ;
	n = ft_strlen(s);
	if (!n)
		return ;
	while (j < n)
	{
		f(i, &s[j]);
		i++;
		j++;
	}
}
