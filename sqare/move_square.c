#include "square_manip.h"
#include "../errors/std_error.h"

void	move_square(t_map_param *param, t_square_manip *block, char **map)
{
	int *fit_size;
	
	fit_size = &block->dimension;
	while (*fit_size > 0 && !square_valid(block, param, map))
	{
		if (can_go_left(param, block))
			move_left(block);
		else if(can_go_down(param, block))
			move_down(block);
		else
			reset(block);
		
	}
	if (*fit_size == 0)
		size_error();
}