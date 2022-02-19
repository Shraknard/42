#include "libft.h"

/*
** p1 = La chaien sur lauelle itérer. 	p2 = La fonction a appeler.
** Applique la fonction f à chaque caractère en precisant l'index pour créer
** une nouvelle chaine “fraiche” résultant des applications successives de f.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	int		n;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	n = ft_strlen(s);
	s2 = (char *)malloc(sizeof(char) * (n + 1));
	if (!s2)
		return (NULL);
	while (i < n)
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
