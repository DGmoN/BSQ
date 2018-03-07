/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mems.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 12:48:40 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/07 13:08:07 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../strs/std_str.h"
#include <stdlib.h>

void	mem_alloc_error(char *e)
{
	ft_putstr("Memory allocation error.\n\t");
	ft_putline(e);
	exit(0);
}
