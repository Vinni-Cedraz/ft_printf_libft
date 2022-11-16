# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 12:57:13 by vcedraz-          #+#    #+#              #
#    Updated: 2022/11/16 15:49:19 by vcedraz-         ###   ########.fr        #
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
				is_format.c


SRCS_2 = put_decimal.c \
				put_hex.c \
				put_pointer.c \
				put_string.c \
				put_usdecimal.c 


SRCS_3 = ft_putchar.c \
				 ft_itoa_base.c \
				 ft_calloc.c \
				 ft_strlen.c \
				 ft_memset.c \


OBJS_1_PATH = ./objs/pivot/
OBJS_2_PATH = ./objs/aux/
OBJS_3_PATH = ./objs/libft/

SRCS_1_PATH = ./srcs/pivot/

SRCS_2_PATH = ./srcs/aux/

OBJS_1 = $(SRCS_1:%.c=$(OBJS_1_PATH)%.o)
OBJS_2 = $(SRCS_2:%.c=$(OBJS_2_PATH)%.o)
OBJS_3 = $(SRCS_3:%.c=$(OBJS_3_PATH)%.o)


all: $(NAME)


$(NAME): $(OBJS_1) $(OBJS_2) $(OBJS_3)
	@ar -rs $(NAME) $(OBJS_1_PATH)*.o $(OBJS_2_PATH)*.o $(OBJS_3_PATH)*.o
	@echo "ft_printf's and libft's .o files silently linked to libftprintf.a"


$(OBJS_1_PATH)%.o: $(SRCS_1_PATH)%.c
	@mkdir -p $(OBJS_1_PATH)
	cc $(FLAGS) -c $< -o $@


$(OBJS_2_PATH)%.o: $(SRCS_2_PATH)%.c
	@mkdir -p $(OBJS_2_PATH)
	cc $(FLAGS) -c $< -o $@


SRCS_3_PATH = ./libs/
$(OBJS_3_PATH)%.o: $(SRCS_3_PATH)%.c
	@mkdir -p $(OBJS_3_PATH)
	cc $(FLAGS) -c $< -o $@


clean:
	rm -rf ./objs/


fclean: clean
	$(RM) $(NAME)
	@rm -f compile_commands.json
	@rm -f a.out


re: fclean all


.PHONY: all clean fclean re
