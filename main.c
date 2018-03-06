/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:29:48 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/06 13:31:11 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "errors/std_error.h"
#include "reading/reader.h"

int main(int ac, char **av)
{
	int file;

	file = 0;

	if (!ac - 1 < 1)
		file = open(av[1], O_RDONLY);
	t_map_param *params;
	char** map = read_map(file, &params);
	int x = 0;
	while (x < params->lines)
	{
		printf("%s\n", map[x]);
		x++;
	}
}
