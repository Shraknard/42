#include "ui.h"

// void	UI_help(char *s)
// {

// }

void	event_help(int id)
{
	if (id == 1)
		system("open ./exemple/json_exemple.txt");
	else if (id == 2)
		system("open ./exemple/scene_exemple.txt");
	else if (id == 3)
		system("open ./exemple/objfile_exemple.txt");
	// else if (id == 4)
	// if (s)
	// 	ft_strdel(&s);
}

// /*
// ** Show the parsing for obj
// */

// void	UI_help_obj()
// {

// }

// /*
// ** Show the parsing
// */

// void	UI_help_scene()
// {

// }


// ** Show the used keys


// void	UI_help_keys()
// {

// }

// /*
// ** Show an exemple of json file
// */

// void	UI_help_json()
// {

// }