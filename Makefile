# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 12:23:11 by claatkin          #+#    #+#              #
#    Updated: 2023/04/19 18:48:03 by claatkin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isprint.c \
	ft_isascii.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_tolower.c \
	ft_toupper.c ft_bzero.c
OBJ = $(SRC:%.c=%.o)
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc

RM = rm -f

all: $(NAME)

${NAME}: $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
			$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re