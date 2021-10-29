# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 21:33:30 by jmilson-          #+#    #+#              #
#    Updated: 2021/10/29 17:58:55 by jmilson-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# I'm commenting almost each step 'cause it will help me in case I forget about something

NAME = libftprintf.a

LIBFT = ./libft/libft.a

CFLAGS = -Wall -Wextra -Werror

INCLUDES = -I. -Ilibft/
# specifying directories

AR = ar rcs
# compiles the library: REPLACING, if the library already exists and there's updates on its files; CREATING, if the library doesn't exists; SORTS, creating an object-file index into the archive the functions in the library, or updating one

FT = ft_printf.c \
		get_c.c \
		get_s.c \
		get_p.c \
		get_d.c \
		get_u.c \
		get_low_x.c \
		get_upper_x.c

SRCS = $(addprefix sources/,$(FT))
# adds a prefix to all FT's files, I'm also specifying where to find FT

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME):$(OBJS) $(LIBFT)
		cp $(LIBFT) ./$@
		$(AR) $(NAME) $(OBJS)

%.o:%.c
		clang -c $(INCLUDES) $(CFLAGS) $< -o $@
# compiling on the specified directories (with flags); $< first dependence; $@ target's name which is being generated

$(LIBFT):
		$(MAKE) -C ./libft
# goes to the specified directory and executes a "make" inside it

clean:
	rm -f $(OBJS)
	$(MAKE) clean -C ./libft

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C ./libft

re: fclean all

.PHONY : all clean fclean re
# avoids name conflicting with other files, improving the performance
