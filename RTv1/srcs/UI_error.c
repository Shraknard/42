#include "ui.h"

void	UI_init_error(int e)
{
	if (e == 1)
		ft_putendlcolor("Malloc failed", RED);
	exit (1);
}