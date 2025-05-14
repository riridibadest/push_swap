NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = push_swap.c rotate.c sort_big.c sort_mini.c swap.c helper.c push.c reverse_rotate.c
OBJS = $(SRCS:.c=.o)
LIBFT_DIR = ./libft
LIBFT = ./libft/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -Ilibft -c $< -o $@

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re