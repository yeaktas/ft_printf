NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror

SRC = $(shell find . -type f -name "*.c")

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
		ar -rc $(NAME) $(OBJ)

all: $(NAME)

clean: 
	rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

git:
	git add .
	git commit -m "$m"
	git@github.com:yeaktas/ft_printf.git

.PHONY: all bonus clean fclean re git