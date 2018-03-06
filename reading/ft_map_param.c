/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_param.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzietsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 13:29:04 by lzietsma          #+#    #+#             */
/*   Updated: 2018/03/05 15:48:25 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../errors/std_error.h"
#include "../strs/std_str.h"
#include "reader.h"
#include <stdlib.h>

int			array_len(char *array)
{
	int i;

	i = 0;
	while (array[i])
	{
		i++;
	}
	i--;
	return (i);
}

t_map_param	*ft_map_param(char *param_array)
{
	int			i;
	t_map_param	*ret;

	i = array_len(param_array);
	ret = malloc(sizeof(ret));
	ret->full = param_array[i];
	ret->obstacle = param_array[i - 1];
	ret->empty = param_array[i - 2];
	i -= 2;
	if (!(ret->lines = ft_atoi(param_array, i)))
		file_head_error();
	return (ret);
}
