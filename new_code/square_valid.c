/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzietsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 11:12:14 by lzietsma          #+#    #+#             */
/*   Updated: 2018/03/06 13:22:23 by lzietsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "square_manip.h"

int	get_width(char s_width)
{
	int i;

	i = 0;
	while (s_width[i])
	{
		i++;
	}
	i--;
	return (i);
}

int	get_height(char s_height)

t_square_manip	*square_init(char c_array, t_map_param *params)
{
	square_manip	*ret;
	if (map_length < lines)


	ret->width = get_width(c_array);
	ret->height = get_height(c_array);
	ret->x = 0;
	ret->y = 0;
	return (ret);
}
