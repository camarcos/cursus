# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/02 15:10:23 by camarcos          #+#    #+#              #
#    Updated: 2024/05/16 12:02:59 by camarcos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCES = ft_putelse.c ft_putnumber.c ft_pointer.c \

OBJECTS = $(SOURCES:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJECTS)

	@ar rcs $(NAME) $(OBJECTS)
	
all:	$(NAME)

clean:
		@rm -f $(OBJECTS)
		
fclean: clean
		@rm -f $(NAME)
		
re: fclean all

.PHONY: all clean fclean re
