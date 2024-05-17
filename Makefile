NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
      ft_strlen.c ft_memset.c	ft_bzero.c	ft_memcpy.c	ft_memmove.c\
      ft_strlcpy.c ft_strlcat.c	ft_toupper.c	ft_tolower.c	ft_strchr.c\
      ft_strrchr.c ft_strncmp.c	ft_memchr.c	ft_memcmp.c

OBJS = $(SRC:.c=.o) 

FLAGS = -Wall -Wextra -Werror

CC = cc

HEADER = libft.h

all: $(NAME)
	
main : $(NAME)
	$(CC) $(FLAGS) test.c -L. $(NAME)
	./a.out

$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)
	

fclean: clean
	rm -f $(NAME)
so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRC)
	cc -shared -o libft.so $(OBJ)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJS)
