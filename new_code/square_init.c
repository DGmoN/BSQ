/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzietsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 11:12:14 by lzietsma          #+#    #+#             */
/*   Updated: 2018/03/06 13:52:39 by lzietsma         ###   ########.fr       */
/*   Updated: 2018/03/06 13:35:51 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "square_manip.h"
#include "../reading/reader.h"

t_square_manip	*square_init(t_map_param *params)
{
	square_manip	*ret;

	t_square_manip	*ret;
	if (params->map_length < params->lines)
		ret->dimension = params->map_length;
	else
		ret->dimension = params->lines;
	ret->x = 0;
	ret->y = 0;
	return (ret);
}
