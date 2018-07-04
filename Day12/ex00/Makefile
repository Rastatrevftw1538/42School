# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/04 12:19:55 by tcardoza          #+#    #+#              #
#    Updated: 2018/07/04 12:20:09 by tcardoza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEST = ft_display_file
SRC = srcs/main.c srcs/util.c
HEADER = includes/

all: compile

compile:
	gcc -Wall -Wextra -Werror -I$(HEADER) $(SRC) -o $(DEST)

fclean:
	rm -f $(DEST)

clean : fclean

re: fclean all
