# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 12:23:11 by claatkin          #+#    #+#              #
#    Updated: 2023/03/27 12:23:14 by claatkin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isprint.c \
	ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c
OBJ = $(SRC:%.c=%.o)
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc

RM = /bin/rm -f
RMDIR = /bin/rmdir

.PHONY: all clean fclean re

all: $(NAME)

${NAME}: $(OBJ)
	${CC} ${CFLAGS} ${SRC} -o ${NAME}

clean:
	$(RM) $(wildcard $(OBJ))

fclean: clean
	$(RM) $(NAME)

re: fclean all