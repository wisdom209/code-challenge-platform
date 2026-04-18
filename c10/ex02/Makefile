NAME = ft_tail
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_tail.c ft_tail_utils.c
OBJS = ft_tail.o ft_tail_utils.o

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o : %.c ft_tail.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
