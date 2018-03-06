/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:29:48 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/06 10:56:50 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "errors/std_error.h"
#include "reading/reader.h"

int main(int ac, char **av)
{
	if (ac - 1 < 1)
		argument_error();
	char** map = read_map(av[1]);
	t_map_param *params = ft_map_param(map[0]);
	int x = 0;
	printf("%i \n", params->lines);
	while (x < 9)
	{
		printf("%s\n", map[x + 1]);
		x++;
	}
}
