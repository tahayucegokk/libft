# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muyucego <muyucego@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/18 01:52:01 by muyucego          #+#    #+#              #
#    Updated: 2023/08/18 01:54:34 by muyucego         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -Wall -Wextra -Werror
SRC = $(shell find . -name "ft_*.c" -not -name "ft_lst*.c")
BONUS = $(shell find . -name "ft_lst*.c")


all: $(NAME)

$(NAME):
	@echo "\033[0;92m\nLoading"
	@sleep 1
	@echo -n "."
	@sleep 1
	@echo -n "..."
	@sleep 1
	@echo "\033[0m"
	gcc $(FLAG) -c $(SRC)
	ar rc $(NAME) *.o
bonus:
	gcc $(FLAG) -c $(BONUS)
	ar rc $(NAME) *.o
clean:
	@echo "\033[0;91m\nCleaning"
	@echo -n "."
	@sleep 1
	@echo -n "..."
	@sleep 1
	@echo "\033[0m"
	/bin/rm -f  *.o
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re