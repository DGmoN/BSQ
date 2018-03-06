/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzietsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 11:12:14 by lzietsma          #+#    #+#             */
/*   Updated: 2018/03/06 13:55:59 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "square_manip.h"
#include "../reading/reader.h"
#include <stdlib.h>

t_square_manip	*square_init(char c_array, t_map_param *params)
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
