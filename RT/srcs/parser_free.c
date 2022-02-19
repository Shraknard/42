#include "rt.h"

static void		ft_free_arr(t_json_arr *tab)
{
	if (tab->next)
		ft_free_arr(tab->next);
	ft_parser_free(tab->val.data.obj);
	free(tab);
}

void			ft_parser_free(t_json *json)
{
	if (json->next)
		ft_parser_free(json->next);
	free(json->key);
	if (json->val.type == TYPE_STRING)
		free(json->val.data.str);
	else if (json->val.type == TYPE_ARR)
		ft_free_arr(json->val.data.tab);
	else if (json->val.type == TYPE_DOUBLE)
		;
	else if (json->val.type == TYPE_OBJ)
		ft_parser_free(json->val.data.obj);
	free(json);
}
