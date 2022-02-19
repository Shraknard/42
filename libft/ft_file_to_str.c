#include "libft.h"
#define SIZE 1000

/*
** Met le contenu d'un fichier dans un char *
*/

char	*ft_file_to_str(char *av)
{
	char	*s;
	int		fd;
	int		ret;
	int		nb;
	char	buf[SIZE + 1];

	fd = open(av, O_RDONLY);
	nb = 0;
	while ((ret = read(fd, buf, SIZE)) > 0)
		nb += ret;
	close(fd);
	fd = open(av, O_RDONLY);
	s = (char *)malloc(sizeof(char) * (nb + 1));
	nb = 0;
	while ((ret = read(fd, buf, SIZE)) > 0)
	{
		s[nb] = '\0';
		nb += ret;
		s = ft_strcat(s, buf);
	}
	close(fd);
	s[nb] = '\0';
	return (s);
}
