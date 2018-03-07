/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_manip.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzietsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 11:02:29 by lzietsma          #+#    #+#             */
/*   Updated: 2018/03/07 13:02:27 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUARE_MANIP_H
# define SQUARE_MANIP_H
# include "../reading/reader.h"

typedef struct		s_square_manip
{
	int	x;
	int	y;
	int	dimension;
}					t_square_manip;

t_square_manip	*square_init(t_map_param *params);
void			reset(t_square_manip *block);
void			move_down(t_square_manip *block);
void			move_left(t_square_manip *block);
int				can_go_down(t_map_param *param, t_square_manip *block);
int				can_go_left(t_map_param *p, t_square_manip *block);
void			move_square(t_map_param *p, t_square_manip *b, char **m);
int				square_valid(t_square_manip *b, t_map_param *p, char **m);
#endif
