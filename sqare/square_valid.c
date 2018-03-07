/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzietsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 13:32:28 by lzietsma          #+#    #+#             */
/*   Updated: 2018/03/07 11:54:15 by lzietsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "square_manip.h"
#include "../reading/reader.h"

int		square_valid(t_square_manip *blk, t_map_param *param, char **map)
{
	int		c_line;
	int		c_char;

	c_line = blk->y;
	while (c_line < blk->dimension)
	{
		c_char = blk->x;
		while (c_char < blk->dimension)
		{
			printf("Test: (%i, %i) -> %i -> %i\n", c_line, c_char, map[c_line][c_char], param->obstacle);
			if (map[c_line][c_char] == param->obstacle)
				return (0);
			c_char++;
		}
		c_line++;
	}
	return (1);
}
