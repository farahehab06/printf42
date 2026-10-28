NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror 

SRCS = ft_printf.c helperfunc.c helperfuncpt2.c format.c

OBJS = $(SRCS:.c=.o)

LIBFT_DIR = ../Libft

LIBFT = $(LIBFT_DIR)/libft.a

all : $(LIBFT) $(NAME)

$(LIBFT) :
	$(MAKE) -C $(LIBFT_DIR)

$(NAME) : $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS)

fclean : clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
