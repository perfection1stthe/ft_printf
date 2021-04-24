# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtraball <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/20 18:29:42 by mtraball	       #+#    #+#              #
#    Updated: 2021/04/19 18:29:45 by mtraball	      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra

LIBRI	= ft_printf.h

SRCS	=  ft_printf.c ft_uns_itoa.c ft_printf_utils.c ft_printf_utils_b.c 	ft_printf_utils_c.c ft_printf_utils_d.c ft_printf_utils_e.c ft_printf_utils_f.c ft_printf_utils_g.c

OBJS	= ${SRCS:.c=.o}

RM		= rm -f

.c.o:
		${CC} ${CFLAGS} -I ${LIBRI} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS} *.gch

fclean:	clean
		${RM} ${NAME}

