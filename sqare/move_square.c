/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzietsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 13:04:03 by lzietsma          #+#    #+#             */
/*   Updated: 2018/03/07 13:04:07 by lzietsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "square_manip.h"
#include "../errors/std_error.h"

void	move_square(t_map_param *param, t_square_manip *block, char **map)
{
	while (block->dimension > 0)
	{
		if (square_valid(block, param, map))
			break ;
		if (can_go_left(param, block))
			move_left(block);
		else
		{
			if(can_go_down(param, block))
				move_down(block);
			else
				reset(block);
		}
		printf("testing: (%i, %i) %i\n", block->x, block->y, block->dimension);
		}
	if (block->dimension == 0)
		size_error();
	printf("Block fit: (%i, %i) %i\n", block->x, block->y, block->dimension);
}
