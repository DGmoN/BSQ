/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_param.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzietsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 13:29:04 by lzietsma          #+#    #+#             */
/*   Updated: 2018/03/05 15:28:27 by lzietsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../errors/std_error.h"
#include "../str/std_str.h"
#include <stdlib.h>

int			array_len(char array)
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

int			get_num(char *c_array, int read_len)
{
	int i;


	i = 0;
	while (i < read_len)
	{
		if (c_array[i] >= '0' && c_array[i] <= '9')


t_map_param	*ft_map_param(char *param_array)
{
	int i;
	int j;
	t_map_param *ret;

	j = 0;
	ret->lines = 
	i = array_len(param_array);
	ret = malloc(sizeof(ret));
	ret->full = param_array[i];
	ret->obstacle = param_array[i - 1];
	ret->empty = param_array[i - 2];
	i = i - 2;
	if((ret->lines = ft_atoi(param_array, i)))
		file_head_error();
	return (ret);
}
