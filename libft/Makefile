.PHONY: fclean run
CC = cc
CFLAGS = -Wall -Wextra -Werror
TARGET = libft
SRCS = ft_isalpha.c 
OBJS = $(SRCS:.c=.o)
all: $(TARGET)
run:
    ./$(TARGET) | cat -e
$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) -o $@ $^
%.o: %.c
    $(CC) $(CFLAGS) -c $<
fclean:
    rm -rf $(TARGET) *.o