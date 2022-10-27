# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 12:57:13 by vcedraz-          #+#    #+#              #
#    Updated: 2022/10/27 13:19:07 by vcedraz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

LIBFT_PATH = ./libraries/
ARCHIVE = $(LIBFT_PATH)libft.a
INCLUDES = -I./includes -I./libraries/libft
FLAGS = -Wall -Wextra -Werror -O3 $(INCLUDES)


SRCS_1 = ft_printf.c \
				print_format.c \
				parser.c \


SRCS_2 = convert_decimal.c \
				convert_hex.c \
				convert_percent.c \
				convert_pointer.c \
				convert_string.c \
				convert_usdecimal.c \


OBJS_1_PATH = ./objects/ft_printf/
OBJS_2_PATH = ./objects/converters_printers/


OBJS_1 = $(SRCS_1:%.c=$(OBJS_1_PATH)%.o)
OBJS_2 = $(SRCS_2:%.c=$(OBJS_2_PATH)%.o)


all: $(NAME)


$(NAME): $(OBJS_1) $(OBJS_2)
	$(MAKE) -C $(LIBFT_PATH)
	mv $(ARCHIVE) $(NAME)
	@ar -rs $(NAME) $(OBJS_1_PATH)*.o $(OBJS_2_PATH)*.o
	@echo "libftprintf.a silently created out of the .o files"


SRCS_1_PATH = ./sources/ft_printf/
$(OBJS_1_PATH)%.o: $(SRCS_1_PATH)%.c
	@mkdir -p $(OBJS_1_PATH)
	cc $(FLAGS) -c $< -o $@


SRCS_2_PATH = ./sources/converters_printers/
$(OBJS_2_PATH)%.o: $(SRCS_2_PATH)%.c
	@mkdir -p $(OBJS_2_PATH)
	cc $(FLAGS) -c $< -o $@


clean:
	rm -rf ./objects/


fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C $(LIBFT_PATH)


re: fclean all


.PHONY: all clean fclean re
