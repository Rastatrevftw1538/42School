# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/27 13:38:32 by tcardoza          #+#    #+#              #
#    Updated: 2018/06/27 13:38:35 by tcardoza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

gcc -c ft_putchar.c -o ft_putchar.o
gcc -c ft_swap.c -o ft_swap.o
gcc -c ft_putstr.c -o ft_putstr.o
gcc -c ft_strlen.c -o ft_strlen.o
gcc -c ft_strcmp.c -o ft_strcmp.o

ar -rv libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

