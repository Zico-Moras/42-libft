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

# Libft sources
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
      ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
      ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c\
      ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
      ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
      ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
      ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
      ft_strtok.c

# Printf sources
PRINTF_DIR = 42-printf
PRINTF_SRC = $(wildcard $(PRINTF_DIR)/files/*.c)

# Object files
OBJS = $(SRC:.c=.o)
PRINTF_OBJS = $(PRINTF_SRC:.c=.o)

# Compiler settings
FLAGS = -Wall -Wextra -Werror
CC = cc
HEADER = libft.h

# Colors for output
GREEN = \033[0;32m
YELLOW = \033[1;33m
RED = \033[0;31m
NC = \033[0m # No Color

all: $(NAME)

$(NAME): $(OBJS) $(PRINTF_OBJS)
	@echo "$(YELLOW)Creating library $(NAME)...$(NC)"
	ar rcs $(NAME) $(OBJS) $(PRINTF_OBJS)
	@echo "$(GREEN)Library $(NAME) created successfully!$(NC)"

# Compile libft sources
%.o: %.c $(HEADER)
	@echo "$(YELLOW)Compiling $<...$(NC)"
	$(CC) $(FLAGS) -c $< -o $@

# Compile printf sources (with correct include path)
$(PRINTF_DIR)/files/%.o: $(PRINTF_DIR)/files/%.c
	@echo "$(YELLOW)Compiling printf source $<...$(NC)"
	$(CC) $(FLAGS) -I$(PRINTF_DIR) -I. -c $< -o $@

clean:
	@echo "$(RED)Cleaning object files...$(NC)"
	rm -f $(OBJS) $(PRINTF_OBJS)

fclean: clean
	@echo "$(RED)Cleaning library...$(NC)"
	rm -f $(NAME)

re: fclean all

# Make sure these targets are not confused with files
.PHONY: all clean fclean re
