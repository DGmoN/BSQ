/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std_error.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:11:08 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/07 13:06:11 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STD_ERROR_H
# define STD_ERROR_H

void	argument_error(void);
void	file_open_error(void);
void	file_head_error(void);
void	map_error(char *cause);
void	size_error(void);
void	mem_alloc_error(char *e);

#endif
