/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 11:10:52 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/06 11:25:25 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reader.h"
#include "../errors/std_error.h"

int		character_test(t_map_param *e, char **map)
{
	int line;
	int digit;

	line = 0;
	while (line < e->lines)
	{
		digit = 0;
		while (map[line][digit])
		{
			if (map[line][digit] != e->obstacle && map[line][digit] != e->empty)
			{
				printf("%c \n", map[line][digit]);
				map_error("Unexpected character encountered");
			}
			digit++;
		}
		line++;
	}
	return (1);
}
