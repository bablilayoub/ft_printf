SRCS =	check_rule.c ft_print_lower_hex.c \
		ft_print_upper_hex.c ft_printf.c ft_putchar.c \
		ft_putdecimal.c ft_putptr.c ft_putstr.c \
		ft_putudemical.c is_rule.c
OBJS = $(SRCS:.c=.o)
CC = cc
HEADER = ft_printf.h
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
RM = rm -f
LIBC = ar rcs

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:	fclean all

.PHONY: clean