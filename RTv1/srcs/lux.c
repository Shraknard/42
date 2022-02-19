#include "rtv1.h"

/*
**	Add a lux to the list
*/

t_lux	*add_lux(t_b *b, t_lux lux)
{
	t_lux	*l;

	if (!b)
		return (NULL);
	if (!(l = b->lux))
	{
		b->lux = (t_lux *)malloc(sizeof(t_lux));
		*(b->lux) = lux;
		b->lux->id = ++b->maxid;
		b->lux->next = NULL;
		return (b->lux);
	}
	while (l->next)
		l = l->next;
	l->next = (t_lux *)malloc(sizeof(t_lux));
	l = l->next;
	*l = lux;
	l->id = ++b->maxid;
	l->next = NULL;
	return (l);
}

/*
** Search a lux with the id
*/

t_lux	*search_lux(t_b *b, int id)
{
	t_lux	*l;

	if (id <= 0 || !b)
		return (NULL);
	l = b->lux;
	while (l && l->id != id)
		l = l->next;
	if (!l)
		return (NULL);
	return (l);
}
