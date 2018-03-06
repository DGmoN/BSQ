/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:29:48 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/06 13:57:36 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "errors/std_error.h"
#include "reading/reader.h"
#include <stdlib.h>
#include <fcntl.h>
#include "../new_code/square_init.c"

int main(int ac, char **av)
{
	int				file;
	char			**map;
	t_square_manip	*block;
	t_map_param 	*params;
	
	file = 0;

	if (!ac - 1 < 1)
		file = open(av[1], O_RDONLY);

	map = read_map(file, &params);
	block = square_init(params);
	int x = 0;
	while (x < params->lines)
	{
		printf("%s\n", map[x]);
		x++;
	}
}
