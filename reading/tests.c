/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 11:10:52 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/06 11:33:17 by wgourley         ###   ########.fr       */
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
				map_error("Unexpected character encountered");
			digit++;
		}
		line++;
	}
	return (1);
}

int		length_test(t_map_param *e, char **map)
{
	int line;
	int first_len;
	int cha;
	
	line = 0;
	first_len = -1;
	while (line < e->lines)
	{
		cha = 0;
		while (map[line][cha])
			cha++;
		if (first_len == -1)
			first_len = cha;
		else
		{
			if (first_len != cha)
				map_error("In consestent line length... cannot continue.");
		}
		line++;
	}
	return (1);
}
