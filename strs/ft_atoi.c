/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzietsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:42:11 by lzietsma          #+#    #+#             */
/*   Updated: 2018/03/05 12:49:09 by lzietsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *c_array)
{
	int i;
	int value;

	i = 0;
	while (c_array)
	{
		value = 10 * value + c_array[i] - '0';
		i++;
	}
	return (value);
}
