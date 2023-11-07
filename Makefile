SRCS = *.c
OBJS = $(SRCS:.c=.o)
CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
RM = rm -f
LIBC = ar rcs

$(NAME):
	$(CC) $(FLAGS) -c $(SRCS)
	$(LIBC) $(NAME) $(OBJS)

all: $(NAME)

clean: 
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:	fclean all