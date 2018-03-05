/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:38:44 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/05 14:01:39 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reader.h"
#include <unistd.h>
#include "../errors/std_error.h"
#include <fcntl.h>

char		**g_map;
int			g_line_index = 0;
t_map_param	*g_map_paramaters = 0;

char 	**read_map(char *file_name)
{
	int		file;
	int 	read_count;
	char	*buffer;
	
	file = open(file_name, O_RDONLY);
	if (file < 1)
		file_open_error();
	buffer = (char *)malloc(sizeof(char *) * BUFFER_SIZE);
	while ((read_count = read(file, buffer, BUFFER_SIZE)))
	{
		handle_lines(buffer, read_count);
		free(buffer);
		buffer = (char *)malloc(sizeof(char *) * BUFFER_SIZE);
	}
}

char *get_line(char *data, int length)
{
	char	*ret;
	int		index;

	index = 0;
	ret = malloc(sizeof(ret) * (length));
	while (index < length)
	{
		ret[index] = data[index];
		index++;
	}
	return (ret);
}

int		handle_lines(char *data, int read_count)
{
	int		index;
	int		last;
	char	*line;

	index = 0;
	last = 0;
	while (index < read_count)
	{
		if (data[index] == '\n')
		{
			line = get_line(data + last, index - last);
			printf("%s", line);
			exit(0);
			if(!g_map_paramaters)
			{
				// make params here
				g_map = (char **)malloc(g_map_paramaters->lines * sizeof(char **));
			}
			else
				g_map[g_line_index] = line;
		}
		index++;
	}
	return (read_count - index);
}
