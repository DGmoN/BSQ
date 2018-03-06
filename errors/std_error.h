/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std_error.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:11:08 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/06 11:18:25 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STD_ERROR_H
# define STD_ERROR_H

void	argument_error(void);
void	file_open_error(void);
void	file_head_error(void);
void	map_error(char *cause);
#endif
