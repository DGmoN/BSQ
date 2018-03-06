/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:30:32 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/06 11:17:59 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../strs/std_str.h"

void	argument_error(void)
{
	ft_putline("Argument error.");
	exit(0);
}

void	file_open_error(void)
{
	ft_putline("Failed to open the file.");
	exit(0);
}

void	file_head_error(void)
{
	ft_putline("Error reading file header");
	exit(0);
}

void	map_error(char *cause)
{
	ft_putstr("There has been a map error:\n");
	ft_putline(cause);
	exit(0);
}

void size_error(void)
{
	ft_putline("There is no open space to put a square!\n");
	exit(0);
}