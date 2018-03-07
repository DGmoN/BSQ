/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_motion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 12:58:24 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/07 12:58:26 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "square_manip.h"

int		can_go_left(t_map_param *param, t_square_manip *block)
{
	if (block->x + block->dimension < param->map_length)
		return (1);
	return (0);
}

int		can_go_down(t_map_param *param, t_square_manip *block)
{
	if ((block->y + block->dimension) < param->lines)
		return (1);
	return (0);
}

void	move_left(t_square_manip *block)
{
	block->x++;
}

void	move_down(t_square_manip *block)
{
	block->y++;
	block->x = 0;
}

void	reset(t_square_manip *block)
{
	block->x = 0;
	block->y = 0;
	block->dimension--;
}
