#include "rt.h"

t_color	get_rand(void)
{
	t_color	c;

	c.c.r = rand() % 256;
	c.c.g = rand() % 256;
	c.c.b = rand() % 256;
	c.c.a = 0;
	return (c);
}

t_color	get_black(void)
{
	t_color	c;

	c.c.r = 0;
	c.c.g = 0;
	c.c.b = 0;
	c.c.a = 0;
	return (c);
}

t_color	get_white(void)
{
	t_color	c;

	c.c.r = 255;
	c.c.g = 255;
	c.c.b = 255;
	c.c.a = 0;
	return (c);
}

int		set_black(t_color *c)
{
	if (!c)
		return (1);
	c->c.r = 0;
	c->c.g = 0;
	c->c.b = 0;
	c->c.a = 0;
	return (1);
}

int		set_white(t_color *c)
{
	if (!c)
		return (1);
	c->c.r = 255;
	c->c.g = 255;
	c->c.b = 255;
	c->c.a = 0;
	return (1);
}
