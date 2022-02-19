#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;
	int lenght;

	i = 0;
	lenght = max - min;
	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	if (lenght <= 0 || !(tab = (int *)malloc(sizeof(int) * lenght)))
		return (NULL);
	while (i < lenght)
	{
		tab[i] = min;
		min += 1;
		i++;
	}
	return (tab);
}
