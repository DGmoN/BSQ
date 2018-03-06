/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:38:44 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/06 11:49:06 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reader.h"
#include <unistd.h>
#include <stdlib.h>
#include "../errors/std_error.h"
#include <fcntl.h>

char		**g_map;
int			g_line_index = 0;
int			g_line_number = 0;
char		*g_line_buffer = 0;
t_map_param	*g_map_paramaters = 0;

char	**read_map(char *file_name, t_map_param **params)
{
	int		file;
	int		read_count;
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
	character_test(g_map_paramaters, g_map);
	g_map_paramaters->map_length = length_test(g_map_paramaters, g_map);
	*params = g_map_paramaters;
	return (g_map);
}

char	*get_line(char *data, int length)
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

void	assign_line(char *line)
{
	if (!g_map_paramaters)
	{
		g_map_paramaters = ft_map_param(line);
		g_map = malloc(sizeof(char **) * g_map_paramaters->lines);
		g_line_index = 0;
	}
	else
	{
		g_line_index = 0;
		g_map[g_line_number] = line;
		g_line_number++;
	}
}

void	handle_lines(char *data, int read_count)
{
	int		index;
	int		last;
	char	*line;

	index = 0;
	last = 0;
	while (index < read_count)
	{
		if (g_line_index == 0)
		{
			free(g_line_buffer);
			g_line_buffer = malloc(sizeof(char *) * BUFFER_SIZE);
		}
		if (data[index] == '\n')
		{
			line = get_line(g_line_buffer, g_line_index);
			assign_line(line);
		}
		else
		{
			g_line_buffer[g_line_index] = data[index];
			g_line_index++;
		}
		index++;
	}
}
