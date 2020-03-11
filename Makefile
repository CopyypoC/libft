#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wiwang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 13:01:27 by wiwang            #+#    #+#              #
#    Updated: 2020/03/11 15:27:14 by wiwang           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all: $(NAME) libft.h
	
$(NAME): $(OBJ)
	@ar rc $(NAME) $^
	@ranlib $(NAME)

%.o: %.c
	@gcc $(FLAGS) -c $< -o $@

oclean:
	@rm -f *.o

clean:
	@rm -f *~ *\#

fclean: clean
	@rm -f $(NAME)

re: fclean all