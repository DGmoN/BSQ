/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:29:48 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/07 13:35:03 by wgourley         ###   ########.fr       */
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

void	handle_file(int file)
{
	int				x;
	char			**map;
	t_square_manip	*block;
	t_map_param		*params;
	
	x = 0;
	map = read_map(file, &params);
	if (!params)
	{
		ft_putline("No data to read, no header found?");
		exit(0);
	}
	block = square_init(params);
	move_square(params, block, map);
	fillin(params, block, map);
	while (x < params->lines)
	{
		ft_putline(map[x]);
		x++;
	}
}
	
int		main(int ac, char **av)
{
	int				file;
	int				ind;

	ind = 0;
	file = 0;
	if (!ac - 1 < 1)
		while (ac - 1 > ind)
		{
			file = open(av[ind + 1], O_RDONLY);
			handle_file(file);
			ind++;
		}
	else
		handle_file(file);
	}
