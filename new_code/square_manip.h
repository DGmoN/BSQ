/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_manip.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzietsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 11:02:29 by lzietsma          #+#    #+#             */
/*   Updated: 2018/03/06 13:59:21 by lzietsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUARE_MANIP_H
# define SQUARE_MANIP_H

typedef struct		s_square_manip
{
	int				x;
	int				y;
	int				dimension;
}					t_square_manip;

t_square_manip	*square_init(t_map_param *params);

#endif
