CC = gcc
SRC = *.c
OBJ = $(SRC:.c=.o)
NAME = libmy.a
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic

all: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(wildcard *~) $(wildcard *.swp) $(NAME)

oclean:
	$(RM) $(OBJ)

fclean: clean oclean
	

re: oclean all 
