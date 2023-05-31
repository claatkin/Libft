# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: claatkin <claatkin@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 12:23:11 by claatkin          #+#    #+#              #
#    Updated: 2023/05/31 14:14:55 by claatkin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isprint.c \
	ft_isascii.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_tolower.c \
	ft_toupper.c ft_bzero.c ft_memset.c ft_memchr.c ft_memcpy.c 	\
	ft_memmove.c ft_memcmp.c ft_strchr.c ft_strrchr.c ft_strlcat.c  \
	ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c   \
	ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c     \
	ft_putnbr_fd.c ft_split.c ft_strmapi.c
	
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