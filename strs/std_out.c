/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std_out.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:04:00 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/05 12:14:04 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char e)
{
	write(1, &e, 1);
}

void	ft_putstr(char *str)
{
	int e;

	e = 0;
	while (str[e])
	{
		ft_putchar(str[e]);
		e++;
	}
}

void	ft_putline(char *str)
{
	ft_putstr(str);
	ft_putchar('\n');
}
