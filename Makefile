
NAME = libft.a
FLAG = -Wall -Wextra -Werror
SRC =  ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c ft_putchar_fd.c ft_toupper.c \
ft_strnstr.c ft_tolower.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_strrchr.c ft_strchr.c ft_memcmp.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c \
ft_calloc.c ft_strdup.c ft_itoa.c ft_memchr.c ft_strjoin.c ft_substr.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@echo "\033[0;92m\nLoading"
	@echo "\033[0m"
	gcc $(FLAG) -c $(SRC)
	ar rc $(NAME) $(OBJ)
clean:
	@echo "\033[0;91m\nCleaning"
	@echo "\033[0m"
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean