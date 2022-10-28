# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 12:57:13 by vcedraz-          #+#    #+#              #
#    Updated: 2022/10/27 22:37:50 by vcedraz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a


LIBFT_PATH = ./libs/
ARCHIVE = $(LIBFT_PATH)libft.a
INCLUDES = -I./includes -I./libs/libft
FLAGS = -Wall -Wextra -Werror $(INCLUDES)


SRCS_1 = ft_printf.c \
				print_until.c \
				parser.c \


SRCS_2 = put_decimal.c \
				put_hex.c \
				put_pointer.c \
				put_string.c \
				put_usdecimal.c \


OBJS_1_PATH = ./objs/pivot/
OBJS_2_PATH = ./objs/aux/


OBJS_1 = $(SRCS_1:%.c=$(OBJS_1_PATH)%.o)
OBJS_2 = $(SRCS_2:%.c=$(OBJS_2_PATH)%.o)


all: $(NAME)


$(NAME): $(OBJS_1) $(OBJS_2)
	$(MAKE) -C $(LIBFT_PATH)
	mv $(ARCHIVE) $(NAME)
	@ar -rs $(NAME) $(OBJS_1_PATH)*.o $(OBJS_2_PATH)*.o
	@echo "libftprintf.a silently created out of the .o files"


SRCS_1_PATH = ./srcs/pivot/
$(OBJS_1_PATH)%.o: $(SRCS_1_PATH)%.c
	@mkdir -p $(OBJS_1_PATH)
	cc $(FLAGS) -c $< -o $@


SRCS_2_PATH = ./srcs/aux/
$(OBJS_2_PATH)%.o: $(SRCS_2_PATH)%.c
	@mkdir -p $(OBJS_2_PATH)
	cc $(FLAGS) -c $< -o $@


clean:
	rm -rf ./objs/


fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C $(LIBFT_PATH)
	@rm -f compile_commands.json


re: fclean all


.PHONY: all clean fclean re
