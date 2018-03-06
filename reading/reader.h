/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:39:53 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/06 11:19:35 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READER_H
# define READER_H
# define BUFFER_SIZE 1024

typedef	struct	s_map_param
{
	int			lines;
	char		empty;
	char		obstacle;
	char		full;
}				t_map_param;

char			**read_map(char *file_name, t_map_param **params);
void			handle_lines(char *data, int read_count);
t_map_param		*ft_map_param(char *param_array);
int				character_test(t_map_param *e, char **map);
#endif
