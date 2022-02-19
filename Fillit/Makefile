NAME = fillit

SRC = 	srcs/check.c srcs/fillit.c srcs/resolution.c srcs/set.c srcs/various.c \
		srcs/cube.c srcs/move.c srcs/utilist.c

FLAGS = -Wall -Wextra -Werror

LIB = libft/libft.a

SRCO = $(SRC:%.c=%.o)

INCLUDES = includes

.PHONY: all re clean

all: $(NAME)

$(NAME):
	@make re -C libft/
	@gcc $(FLAGS) $(SRC) $(LIB) -o $(NAME) -I $(INCLUDES)

clean:
	@rm -rf $(SRCO)
	@make clean -C libft/

fclean: clean
	@rm -rf $(NAME)
	@make fclean -C libft/

re: fclean all
