
NAME = libftprintf.a

SRC = ft_printf.c\
ft_char.c\
ft_nbr.c\
ft_str.c\
ft_hexd.c\
hay ccambios\
ft_simbol.c\


OBJS = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all : $(NAME) $(OBJS)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

	@ar rcs $(NAME)

	@gcc $(FLAGS) -c
.PHONY: all clean fclean re
