.PHONY: fclean run
CC = cc
CFLAGS = -Wall -Wextra -Werror
SOURCES = main.c \
		ft_bzero.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memset.c\
		ft_strlen.c\
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c 
PROGRAM = libft.a
OBJS = $(SOURCES:.c=.o)
LIBS = -lbsd
all: $(PROGRAM)

$(PROGRAM): $(OBJS)
	$(CC) $(CFLAGS) -o $(PROGRAM) $(OBJS) $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

r: all
	@./$(PROGRAM) | cat -e

c:
	rm -rf $(PROGRAM) *.o
