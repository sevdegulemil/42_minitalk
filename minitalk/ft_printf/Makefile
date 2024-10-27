# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 00:21:53 by sevdeemil         #+#    #+#              #
#    Updated: 2023/11/03 10:37:38 by seemil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_hexadecimal.c ft_integer.c ft_pointer_adress.c ft_printf.c ft_putcharacter_len.c ft_string.c ft_unsigned_int.c 

OBJS	= $(SRCS:.c=.o)

CC	= gcc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re