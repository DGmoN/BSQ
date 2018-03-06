/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzietsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:42:11 by lzietsma          #+#    #+#             */
/*   Updated: 2018/03/06 11:00:06 by lzietsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *c_array, int elem_to_read)
{
	int i;
	int value;

	i = 0;
	value = 0;
	while (i < elem_to_read)
	{
		if (c_array[i] >= '0' && c_array[i] <= '9')
		{
			value = (10 * value) + c_array[i] - '0';
			i++;
		}
		else
			value = -1;
	}
	return (value);
}
