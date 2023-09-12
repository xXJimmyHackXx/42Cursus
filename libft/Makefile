.PHONY: fclean run
CC = cc
SOURCES = main.c
TARGET = my_program
OBJS = $(SOURCES:.c=.o)
all: $(TARGET)
$(TARGET): $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $^
%.o: %.c
	$(CC) $(CFLAGS) -c $<
run: all
	@./$(TARGET) | cat -e
fclean:
	rm -rf $(TARGET) *.o