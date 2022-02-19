/*
** Swap 2 tab blocks
*/

void	swap_tab(void **a, void **b)
{
	void	*c;

	c = *a;
	*a = *b;
	*b = c;
}
