# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbayrakt <tbayrakt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 16:49:15 by tanselbayra       #+#    #+#              #
#    Updated: 2024/02/27 12:14:27 by tbayrakt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

######### Variables ########
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
NAME = libft.a
AR = ar rcs
LIB = ranlib

SRCS = ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o \
	ft_isdigit.o ft_isprint.o ft_memset.o ft_strlen.o \
	ft_toupper.o

OBJS = ${SRCS:.c=.o}

######### Targets ########
all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}
	${LIB} ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

######### Clean ########
# Clean obj files (.o)
clean:
	${RM} ${OBJS}

# Clean obj and library (.o .a)
fclean: clean
	${RM} ${NAME}

# Re-Make the library
re: fclean all

# Dependency of header file for all obj
${OBJS}: libft.h

.PHONY: all clean fclean re