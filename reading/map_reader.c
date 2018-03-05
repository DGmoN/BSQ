/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:38:44 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/05 13:21:34 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reader.h"
#include <unistd.h>
#include "../errors/std_error.h"
#include <fcntl.h>



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
		write(1, buffer, BUFFER_SIZE);
		free(buffer);
		buffer = (char *)malloc(sizeof(char *) * BUFFER_SIZE);
	}
}
