# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: francima <francima@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/23 11:15:46 by francima          #+#    #+#              #
#    Updated: 2024/06/23 11:15:48 by francima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
      ft_strlen.c ft_memset.c	ft_bzero.c	ft_memcpy.c	ft_memmove.c\
      ft_strlcpy.c ft_strlcat.c	ft_toupper.c	ft_tolower.c	ft_strchr.c\
      ft_strrchr.c ft_strncmp.c	ft_memchr.c	ft_memcmp.c	ft_strnstr.c\
      ft_atoi.c	ft_calloc.c	ft_strdup.c	ft_substr.c	ft_strjoin.c\
      ft_strtrim.c	ft_split.c	ft_itoa.c	ft_strmapi.c	ft_striteri.c\
      ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c		ft_putnbr_fd.c\
      ft_strtok.c

PRINTF_DIR = 42-printf
PRINTF_SRC = $(wildcard $(PRINTF_DIR)/files/*.c)

OBJS = $(SRC:.c=.o)
PRINTF_OBJS = $(notdir $(PRINTF_SRC:.c=.o))

FLAGS = -Wall -Wextra -Werror

CC = cc

HEADER = libft.h

all: $(NAME)

$(NAME): $(PRINTF_DIR)
	$(CC) $(FLAGS) -c $(SRC) $(PRINTF_SRC)
	ar rcs $(NAME) $(OBJS) $(PRINTF_OBJS)

clean:
	rm -rf $(OBJS) $(PRINTF_OBJS)
	

fclean: clean
	rm -f $(NAME)

re: fclean all
