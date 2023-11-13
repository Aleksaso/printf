
NAME = libftprintf.a

SRC = ft_printf.c\
ft_char.c\
ft_etri.c\
ft_hexdma.c\
ft_hexdmi.c\
ft_nbrd.c\
ft_nbru.c\
ft_ptro.c\
ft_simbol.c\
ft_str.c\


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
