# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 16:49:15 by tanselbayra       #+#    #+#              #
#    Updated: 2024/02/26 21:11:00 by tanselbayra      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Dependency list of the 'all' rule
OBJS = ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memset.o ft_strlen.o

all: ${OBJS}
	cc main.c ${OBJS}

%.o: %.c
	cc -c $<

ft_bzero.o: ft_bzero.c
	cc -c ft_bzero.c

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf a.out

re: fclean
	$(MAKE) all