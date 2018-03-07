/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:29:48 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/07 13:10:30 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "errors/std_error.h"
#include "reading/reader.h"
#include <stdlib.h>
#include <fcntl.h>
#include "sqare/square_manip.h"
#include "strs/std_str.h"

void	fillin(t_map_param *par, t_square_manip *block, char **map)
{
	int	x;
	int y;

	y = 0;
	while (y < block->dimension)
	{
		x = 0;
		while (x < block->dimension)
		{
			map[block->y + y][block->x + x] = par->full;
			x++;
		}
		y++;
	}
}

int		main(int ac, char **av)
{
	int				file;
	int				x;
	char			**map;
	t_square_manip	*block;
	t_map_param		*params;

	file = 0;
	x = 0;
	if (!ac - 1 < 1)
		file = open(av[1], O_RDONLY);
	map = read_map(file, &params);
	block = square_init(params);
	move_square(params, block, map);
	fillin(params, block, map);
	while (x < params->lines)
	{
		ft_putline(map[x]);
		x++;
	}
}
