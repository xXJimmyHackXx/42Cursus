NAME = libftprintf.a
SOURCES = ft_printf \
		

OBJS = $(SOURCES:.c=.o)
FLAGS = -Wall -Wextra -Werror
$(NAME):
	@gcc $(FLAGS) -c $(SOURCES) -I ./
	@ar rc $(NAME) $(OBJS)
all: $(NAME)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re