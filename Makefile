HEADER = ./includes
SRC = $(wildcard ./src/*/*.c)
CC = gcc
FLAGS = -Wall -Werror -Wextra
NAME = libft.a
OBJ = $(SRC:.c=.o)

all: $(NAME)	
	
$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -I $(HEADER) -c $< -o $@

clean:
	rm -rf ./src/*/*.o
	
fclean: clean
	rm -rf libft.a	

re: fclean all