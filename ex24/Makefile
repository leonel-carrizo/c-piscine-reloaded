# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 15:33:13 by lcarrizo          #+#    #+#              #
#    Updated: 2023/09/08 11:41:17 by lcarrizo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OUT = libft.a
P_SRC = ./srcs/
HEADER = ./includes
SRCS = $(P_SRC)ft_putchar.c $(P_SRC)ft_putstr.c $(P_SRC)ft_strcmp.c \
	$(P_SRC)ft_strlen.c $(P_SRC)ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
CC = gcc $(FLAGS)
FLAGS = -Wall -Wextra -Werror
# -c: compile without exe. -I: find the header in the folder given
OPT = -c -I $(HEADER)
# ar: create static library, r: add or replace library if exist, 
# c: create library if doesn't exist.
CC_2 = ar rc

$(OUT):
	$(CC) $(OPT) $(SRCS)
	$(CC_2) $(OUT) $(OBJ)

all: $(OUT)

clean:
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -rf $(OUT)

re: fclean all 
