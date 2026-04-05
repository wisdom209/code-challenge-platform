CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = ft_display_file
SRCS = ft_display_file.c
OBJS = ft_display_file.o

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
