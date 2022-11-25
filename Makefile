# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 12:57:13 by vcedraz-          #+#    #+#              #
#    Updated: 2022/11/25 00:19:42 by vcedraz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## VARIABLES ##

NAME     = libftprintf.a
FLAGS    = -Wall -Wextra -Werror $(INCLUDES)
INCLUDES = -I./includes -I./libs/libft

SRCS_1 = ft_printf.c \
			 parser.c \
		   is_format.c \
		  print_until.c \

SRCS_2 = put_decimal.c \
              put_hex.c \
           put_pointer.c \
             put_string.c \
           put_usdecimal.c \

SRCS_3 = ft_putchar.c \
           ft_calloc.c \
            ft_strlen.c \
             ft_memset.c \
           ft_itoa_base.c \

OBJS_1_PATH = ./objs/pivot/
OBJS_2_PATH = ./objs/aux/
OBJS_3_PATH = ./libs/objs_printf/
SRCS_1_PATH = ./srcs/pivot/
SRCS_2_PATH = ./srcs/aux/
SRCS_3_PATH = ./libs/
OBJS_1 = $(SRCS_1:%.c=$(OBJS_1_PATH)%.o)
OBJS_2 = $(SRCS_2:%.c=$(OBJS_2_PATH)%.o)
OBJS_3 = $(SRCS_3:%.c=$(OBJS_3_PATH)%.o)

## RULES ##

all: $(NAME)

$(NAME): $(OBJS_1) $(OBJS_2)
	make printf -C $(SRCS_3_PATH)
	ar -rs $(NAME) $(OBJS_1_PATH)*.o $(OBJS_2_PATH)*.o $(OBJS_3_PATH)*.o

$(OBJS_1_PATH)%.o: $(SRCS_1_PATH)%.c
	@mkdir -p $(OBJS_1_PATH)
	cc $(FLAGS) -c $< -o $@

$(OBJS_2_PATH)%.o: $(SRCS_2_PATH)%.c
	@mkdir -p $(OBJS_2_PATH)
	cc $(FLAGS) -c $< -o $@

clean:
	rm -rf ./objs/
	make clean_printf -C $(SRCS_3_PATH)

fclean: clean
	$(RM) $(NAME)
	rm -f $(SRCS_3_PATH)*.a
	@rm -f compile_commands.json
	@rm -f a.out

re: fclean all

.PHONY: all clean fclean re
