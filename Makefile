# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daboyer <daboyer@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 22:14:52 by daboyer           #+#    #+#              #
#    Updated: 2023/02/12 16:47:15 by daboyer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=		ft_isalnum.c ft_isprint.c  \
					ft_strlcat.c ft_strncmp.c  ft_atoi.c ft_isalpha.c \
					ft_memcpy.c  ft_strlcpy.c \
					ft_tolower.c ft_bzero.c   ft_isascii.c \
					ft_memmove.c  ft_strlen.c \
					ft_toupper.c  ft_isdigit.c ft_memset.c
OBJS			= $(SRCS:.c=.o)

CC				= gcc

RM				= rm -f

CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)
