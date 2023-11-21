
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g
RM = rm -f
AR = ar
ARS = $(AR) rcs

SRC = ft_printf.c \
	ft_char.c \
	ft_etri.c \
	ft_hexdma.c \
	ft_nbrd.c \
	ft_nbru.c \
	ft_ptro.c \
	ft_simbol.c \
	ft_str.c

OBJS = $(SRC:.c=.o)
DEPS = $(SRC:.c=.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(ARS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

-include $(DEPS)

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
