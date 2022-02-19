#include "libft.h"

/*
** Permet de mettre un chiffre en couleur.
*/

void	ft_putnbrcolor(int i, char *color)
{
	ft_putstr(color);
	ft_putnbrendl(i);
	ft_putstr(RESET);
}
