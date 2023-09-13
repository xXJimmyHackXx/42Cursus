.PHONY: fclean run
CC = cc
SOURCES = main.c \
		ft_bzero.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memset.c\
		ft_strlen.c\
		ft_memcpy.c
PROGRAM = libft.a
OBJS = $(SOURCES:.c=.o)

all: $(PROGRAM)

$(PROGRAM): $(OBJS)
	$(CC) $(CFLAGS) -o $(PROGRAM) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run: all
	./$(PROGRAM) | cat -e

clean:
	rm -rf $(PROGRAM) *.o