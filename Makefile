# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adahmad <adahmad@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/03 12:07:22 by adahmad           #+#    #+#              #
#    Updated: 2022/06/14 10:07:43 by adahmad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

MANDATORY	= 	ft_isalpha.c 		ft_toupper.c 		\
				ft_isdigit.c 		ft_tolower.c 		\
				ft_isalnum.c 		ft_strchr.c			\
				ft_isascii.c 		ft_strrchr.c		\
				ft_isprint.c 		ft_strncmp.c		\
				ft_strlen.c  		ft_memchr.c 		\
				ft_memset.c 		ft_memcmp.c 		\
				ft_bzero.c 			ft_strnstr.c		\
				ft_memcpy.c 		ft_atoi.c 			\
				ft_memmove.c 							\
				ft_strlcpy.c 							\
				ft_strlcat.c 							\
				ft_calloc.c 		ft_strdup.c 		\
				ft_putchar_fd.c 	ft_putstr_fd.c 		\
				ft_itoa.c 			ft_putendl_fd.c 	\
				ft_putnbr_fd.c 							\
				ft_strmapi.c
				

OBJ 		=	$(MANDATORY:.c=.o)

BONUS 		=	ft_lstnew.c 							\
				ft_lstadd_front.c 						\
				ft_lstsize.c 							\
				ft_lstlast.c 							\
				ft_lstadd_back.c 						\
				ft_lstdelone.c 							\
				ft_lstclear.c 							\
				ft_lstiter.c 							\
				ft_lstmap.c 							

B_OBJ		=	$(BONUS:.c=.o)

CC			=	@gcc
RM			=	@rm -f
CFLAGS		=	-Wall -Wextra -Werror -I.

NAME		=	libft.a

all			:	$(NAME)

$(NAME)		:	$(OBJ)
				@ar rcs $(NAME) $(OBJ)

clean		:	
				$(RM) $(OBJ) $(B_OBJ)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

bonus:			$(B_OBJ)
				@ar rcs $(NAME) $(B_OBJ)

.PHONY:			all clean fclean re bonus