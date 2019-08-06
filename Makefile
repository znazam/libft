# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: znazam <znazam@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/27 11:46:12 by znazam            #+#    #+#              #
#    Updated: 2019/08/06 08:20:44 by znazam           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = ft_putchar.c ft_strdel.c ft_strnequ.c ft_putchar_fd.c ft_strdup.c\
	  ft_strnew.c ft_putendl.c ft_strequ.c ft_strnstr.c ft_atoi.c\
	  ft_putendl_fd.c ft_striter.c ft_strrchr.c ft_bzero.c ft_putnbr.c \
	  ft_striteri.c ft_strsplit.c ft_isalnum.c ft_memalloc.c ft_putnbr_fd.c	\
	  ft_strjoin.c ft_strstr.c ft_isalpha.c ft_memccpy.c ft_putstr.c \
	  ft_strlcat.c ft_strsub.c ft_isascii.c ft_memchr.c ft_putstr_fd.c \
	  ft_strlen.c ft_strtrim.c ft_isdigit.c ft_memcmp.c ft_strcat.c \
	  ft_strmap.c ft_isprint.c ft_memcpy.c ft_strchr.c ft_strmapi.c \
	  ft_tolower.c ft_memdel.c ft_strclr.c ft_strncat.c ft_toupper.c ft_itoa.c\
	  ft_memmove.c ft_strcmp.c ft_strncmp.c ft_memset.c ft_strcpy.c\
	  ft_strncpy.c ft_isspace.c ft_repchr.c ft_lstnew.c ft_lstdel.c ft_lstadd.c\
	  ft_swap.c ft_strndup.c ft_lstdelone.c ft_swapnfree.c\

OBJ = $(patsubst %.c, %.o, $(SRC)) 

INCL = libft.h

all: $(NAME)


$(NAME): $(OBJ)
	ar rv $(NAME) $(OBJ) $(INCL)
	ranlib $(NAME)

%.o: %.c
	gcc -c -Wall -Werror -Wextra $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
