/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:39:53 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/05 15:27:28 by lzietsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READER_H
# define READER_H
# define BUFFER_SIZE 1024

char			**read_map(char *file_name);
void			handle_lines(char *data, int read_count);
t_map_param		*ft_map_param(char *param_array);
typedef	struct	s_map_param
{
	int			lines;
	char		empty;
	char		obstacle;
	char		full;
}				t_map_param;

#endif
