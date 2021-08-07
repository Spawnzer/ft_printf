# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/17 17:38:57 by adubeau           #+#    #+#              #
#    Updated: 2021/07/22 12:57:45 by adubeau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	srcs/ft_get_conversion.c srcs/ft_printf.c srcs/ft_putstr.c srcs/ft_putchar.c srcs/ft_putnbru.c srcs/ft_putnbr.c srcs/ft_hexa.c 
OBJS 	= ${SRCS:.c=.o}
SRCS_B	=
OBJS_B	= ${SRCS_B:.c=.o}
HEADER	= includes/

CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror

.c.o:		%.o : %.c
					${CC} ${CFLAGS} -I ${HEADER} -c $< -o $(<:.c=.o)

$(NAME):	${OBJS}
					ar rc ${NAME} ${OBJS}

all: 		${NAME}


clean:
					rm -f ${OBJS} ${OBJS_B}

fclean: 	clean
					rm -f $(NAME)

re:			fclean all

.PHONY: all clean fclean re%
