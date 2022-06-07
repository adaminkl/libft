# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/03 12:07:22 by adahmad           #+#    #+#              #
#    Updated: 2022/06/07 12:35:02 by adahmad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strlen.c ft_memset.c ft_atoi.c \
	  ft_isprint.c ft_toupper.c ft_tolower.c ft_strlcpy.c ft_strlcat.c ft_bzero.c ft_memcpy.c \
	  

OBJ = ./*.o

FLAG = -Wall -Wextra -Werror -I. -c 

all: $(NAME)

$(NAME): $(OBJ)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

$(OBJ): $(SRC)
		@gcc $(FLAG) $(SRC)
		
clean:
		@rm -f $(OBJ)
	
fclean:	clean
		@rm -f libft.gen
		@rm -f $(NAME)
		@rm -f $(NAME:.a=.so)
	
re: fclean all

.PHONY: all clean fclean re
