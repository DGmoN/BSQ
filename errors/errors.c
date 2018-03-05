/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:30:32 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/05 12:54:36 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../strs/std_str.h"

void	argument_error()
{
	ft_putline("Argument error.");
	exit(0);
}

void	file_open_error()
{
	ft_putline("Failed to open the file.");
	exit(0);
}
