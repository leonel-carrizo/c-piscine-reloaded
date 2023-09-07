# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 15:33:13 by lcarrizo          #+#    #+#              #
#    Updated: 2023/09/07 19:59:43 by lcarrizo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OUT = libft.a
P_SRC = ./srcs/
SRC = $(P_SRC)ft_putchar.c $(P_SRC)ft_putstr.c $(P_SRC)ft_strcmp.c \
	$(P_SRC)ft_strlen.c $(P_SRC)ft_swap.c
HEADER = ./includes
FLAGS = -Wall -Wextra -Werror
# -c: compile without exe. -I: find the header in the folder given
OPT = -c -I $(HEADER)
CC = gcc
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(OUT)

