CC = gcc
CLAGS = -Wall -Werror -Wextra
SRCS = ft_cat.c
OBJS = ft_cat.o
NAME = ft_cat

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: clean fclean all
