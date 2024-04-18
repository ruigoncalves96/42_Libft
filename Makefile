CC: cc
CFLAGS: -Wall -Wextra -Werror
NAME = libft.a
SRC = *.c
OBJ = *.o

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	cc -c $(SRC)

bin:

clean:
	rm $(OBJ) libft.a

fclean:

re:
