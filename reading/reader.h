/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:39:53 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/05 13:45:45 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READER_H
# define READER_H
# define BUFFER_SIZE 1024

char			**read_map(char *file_name);
void			handle_lines(char *data, int read_count);

typedef	struct	s_map_param
{
	int			lines;
	char		empty;
	char		obstacle;
	char		full;
}				t_map_param;

#endif
