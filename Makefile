# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: znazam <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/27 11:46:12 by znazam            #+#    #+#              #
#    Updated: 2019/05/28 10:21:48 by znazam           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = "libft.a"

SRC = *.c 

OBJ = *.o

INCL = libft.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar rv $(NAME) $(OBJ) $(INCL)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
