/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzietsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 13:32:28 by lzietsma          #+#    #+#             */
/*   Updated: 2018/03/07 12:27:43 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "square_manip.h"
#include "../reading/reader.h"

int		square_valid(t_square_manip *blk, t_map_param *param, char **map)
{
	int		c_line;
	int		c_char;

	c_line = 0;
	while (c_line < blk->dimension)
	{
		c_char = 0;
		while (c_char < blk->dimension)
		{
			if (map[c_line + blk->y][c_char + blk->x] == param->obstacle)
				return (0);
			c_char++;
		}
		c_line++;
	}
	return (1);
}
