#include "libft.h"

/*
** p1 = La taille à allouer
** Alloue et retourne une chaine de caractère “fraiche” terminée par un ’\0’. \
** Chaque caractère de la chaine est initialisé à ’\0’. NULL si fail.
*/

char	*ft_strnew(size_t size)
{
	char	*s;

	if (!(s = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(s, '\0', size + 1);
	return (s);
}
