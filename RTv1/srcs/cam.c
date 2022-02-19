#include "rtv1.h"

/*
** Refresh the dir vector
*/

void	refresh_dir(t_cam *cam, t_v v)
{
	cam->dir = v;
	cam->dirright = vect_prod(v, cam->dirup);
}

/*
** Refresh the dirrup vector
*/

void	refresh_dirup(t_cam *cam, t_v v)
{
	cam->dirup = v;
	cam->dir = vect_prod(v, cam->dirright);
}

/*
** Refresh the dirright vector
*/

void	refresh_dirright(t_cam *cam, t_v v)
{
	cam->dirright = v;
	cam->dirup = vect_prod(v, cam->dir);
}
