/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:38:44 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/07 13:03:04 by wgourley         ###   ########.fr       */
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

char	**read_map(int file, t_map_param **params)
{
	int		read_count;
	char	*buffer;

	buffer = (char *)malloc(sizeof(char *) * BUFFER_SIZE);
	while ((read_count = read(file, buffer, BUFFER_SIZE)))
	{
		if (!buffer)
			mem_alloc_error("file buffer");
		if (handle_lines(buffer, read_count))
			break ;
		free(buffer);
		buffer = 0;
		buffer = (char *)malloc(sizeof(char *) * BUFFER_SIZE);
	}
	free(buffer);
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
	ret = (char *)malloc(sizeof(char *) * (length));
	if (!ret)
		mem_alloc_error("line alloc");
	while (index < length)
	{
		ret[index] = data[index];
		index++;
	}
	ret[index] = 0;
	return (ret);
}

void	assign_line(char *line)
{
	if (!g_map_paramaters)
	{
		g_map_paramaters = ft_map_param(line);
		g_map = malloc(sizeof(char **) * g_map_paramaters->lines + 1);
		if (!g_map)
			mem_alloc_error("Map alloc");
		g_line_index = 0;
	}
	else
	{
		g_line_index = 0;
		g_map[g_line_number] = line;
		g_line_number++;
	}
}

int		handle_lines(char *data, int read_count)
{
	int		index;
	char	*line;

	index = 0;
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
	return (1);
}
