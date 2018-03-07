/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:39:53 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/07 12:23:58 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READER_H
# define READER_H
# define BUFFER_SIZE 2048

typedef	struct	s_map_param
{
	int			lines;
	int			map_length;
	char		empty;
	char		obstacle;
	char		full;
}				t_map_param;

char			**read_map(int file, t_map_param **params);
int				handle_lines(char *data, int read_count);
t_map_param		*ft_map_param(char *param_array);
int				character_test(t_map_param *e, char **map);
int				length_test(t_map_param *e, char **map);
int				free_param(t_map_param **e);
#endif
