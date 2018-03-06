/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzietsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 11:12:14 by lzietsma          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/03/06 13:41:52 by lzietsma         ###   ########.fr       */
=======
/*   Updated: 2018/03/06 13:35:51 by wgourley         ###   ########.fr       */
>>>>>>> 04a3ffa056e2444f4613b901c4e0e17c6eae5d2f
/*                                                                            */
/* ************************************************************************** */

#include "square_manip.h"
#include "../reading/reader.h"

t_square_manip	*square_init(t_map_param *params)
{
<<<<<<< HEAD
	square_manip	*ret;

=======
	t_square_manip	*ret;
>>>>>>> 04a3ffa056e2444f4613b901c4e0e17c6eae5d2f
	if (params->map_length < params->lines)
		ret->dimension = params->map_length;
	else
		ret->dimension = params->lines;
	ret->x = 0;
	ret->y = 0;
	return (ret);
}
