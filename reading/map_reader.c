/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:38:44 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/05 12:48:56 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reader.h"
#include <unistd.h>
#include "../errors/std_error.h"

char 	**read_map(char *file_name)
{
	int	file;
	
	file = open(file_name, O_RDONLY);
	if (!file)
		file_open_error();
}
