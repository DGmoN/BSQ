/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzietsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 11:12:14 by lzietsma          #+#    #+#             */
/*   Updated: 2018/03/06 13:58:06 by lzietsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "square_manip.h"
#include "../reading/reader.h"
#include <stdlib.h>

t_square_manip	*square_init(t_map_param *params)
{
	t_square_manip	*ret;

	ret = malloc(sizeof(ret));
	if (params->map_length < params->lines)
		ret->dimension = params->map_length;
	else
		ret->dimension = params->lines;
	ret->x = 0;
	ret->y = 0;
	return (ret);
}

int				free_square(t_square_manip **e)
{
	free(*e);
	return (0);
}