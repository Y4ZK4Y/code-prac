# Variables
NAME = brackets
SRC = brackets.c
OBJ = $(SRC:.c=.o)
CC = clang
CFLAGS = -Wall -Wextra -Werror -pedantic

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

memcheck: $(NAME)
	valgrind --leak-check=full ./$(NAME)

.PHONY: all clean fclean re memcheck
