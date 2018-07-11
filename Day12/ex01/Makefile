# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/05 08:44:08 by tcardoza          #+#    #+#              #
#    Updated: 2018/07/05 08:44:12 by tcardoza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra ft_cat.c -o $(NAME)

clean:
	rm -f ft_cat.o

fclean: clean
	rm -f $(NAME)

re: fclean all
