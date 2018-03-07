# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wgourley <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/07 13:11:27 by wgourley          #+#    #+#              #
#    Updated: 2018/03/07 13:15:27 by wgourley         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OUTF="bsq"

all: clean
	gcc -c *.c */*.c -Wall -Wextra -Werror
	gcc -o $(OUTF) *.o

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(OUTF)

re: fclean all
