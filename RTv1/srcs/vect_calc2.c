#include "rtv1.h"

/*
** Add value to a vector
*/

t_v		vect_addnb(t_v *v, double nb)
{
	t_v		c;

	c.x = v->x + nb;
	c.y = v->y + nb;
	c.z = v->z + nb;
	return (c);
}

/*
** Subtract value nb to the vector
*/

t_v		vect_subnb(t_v *v, double nb)
{
	t_v		c;

	c.x = v->x - nb;
	c.y = v->y - nb;
	c.z = v->z - nb;
	return (c);
}

/*
** Multiply a vector by nb
*/

t_v		vect_multnb(t_v *v, double nb)
{
	t_v		c;

	c.x = v->x * nb;
	c.y = v->y * nb;
	c.z = v->z * nb;
	return (c);
}
