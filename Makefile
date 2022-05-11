# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdutel-l <cdutel-l@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 11:52:00 by cdutel-l          #+#    #+#              #
#    Updated: 2021/12/15 13:11:15 by cdutel-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_putchar.c ft_putstr_mod.c ft_putstr_mod2.c\
		ft_ifft.c ft_nbh.c ft_nbhmaj.c ft_pvoidh.c ft_string.c ft_unsignedputnbr.c\
		ft_putnbr.c

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

%.o : %.c ft_printf.h Makefile
		${CC} ${CFLAGS} -I includes -c $< -o $@

${NAME} : ${OBJS}
		 ar rcs ${NAME} ${OBJS}

all : ${NAME}

clean :
		${RM} ${OBJS}

fclean : clean
		${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re
