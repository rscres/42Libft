HEADER = ./includes
SRC = $(wildcard ./*.c)
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
	rm -rf */*.o
	
fclean: clean
	rm -rf libft.a	

re: fclean all