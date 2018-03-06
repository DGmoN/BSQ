/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:29:48 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/06 11:09:04 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "errors/std_error.h"
#include "reading/reader.h"

int main(int ac, char **av)
{
	if (ac - 1 < 1)
		argument_error();
	t_map_param *params;
	char** map = read_map(av[1], &params);
	int x = 0;
	while (x < params->lines)
	{
		printf("%s\n", map[x]);
		x++;
	}
}
