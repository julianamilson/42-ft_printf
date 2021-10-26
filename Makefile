# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 21:33:30 by jmilson-          #+#    #+#              #
#    Updated: 2021/10/26 17:16:07 by jmilson-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = ./libft/libft.a

CFLAGS = -Wall -Wextra -Werror

INCLUDES = -I. -Ilibft/

AR = ar rcs

FT = ft_printf.c \
		get_c_s.c \
		get_p.c \
		get_d.c

SRCS = $(addprefix sources/,$(FT))

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME):$(OBJS) $(LIBFT)
		cp $(LIBFT) ./$@
		$(AR) $(NAME) $(OBJS)

%.o:%.c
		clang -c $(INCLUDES) $(CFLAGS) $< -o $@
# $< referente a primeira dependencia da regra
# -o output $@ nome da regra

$(LIBFT):
		$(MAKE) -C ./libft

clean:
	rm -f $(OBJS)
	$(MAKE) clean -C ./libft

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C ./libft

re: fclean all

.PHONY : all clean fclean re
