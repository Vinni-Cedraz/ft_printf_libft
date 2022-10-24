# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/30 02:45:29 by tkomeno           #+#    #+#              #
#    Updated: 2022/10/23 22:16:07 by vcedraz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT_PATH = ./libraries
OBJECTS_PATH = ./objects
OBJS_1_PATH = ./objects/ft_printf/converters_printers
OBJS_2_PATH = ./objects/ft_printf
OBJS_3_PATH = ./objects/libft

SOURCES_PATH = ./sources
CONVERTERS_PATH = ./sources/converters_printers


SOURCE_FILES = ft_printf.c \
				is_format.c \
				print_format.c \
				parser.c \


CONVERTERS_FILES = decimal.c \
				hex.c \
				percent.c \
				pointer.c \
				string.c \
				usdecimal.c \

SRCS_1 = $(addprefix $(CONVERTERS_PATH)/,$(CONVERTERS_FILES))

SRCS_2 = $(addprefix $(SOURCES_PATH)/,$(SOURCE_FILES))

OBJS_1 = $(SRCS_1:.c=.o)

OBJS_2 = $(SRCS_2:.c=.o)

OBJS = $(OBJS_1) $(OBJS_2)

INCLUDES = -I./includes -I./libraries/libft

FLAGS = cc -g -Wall -Wextra -Werror

AR = ar -cr

all: $(NAME)

mkdirs:
	mkdir -p $(OBJECTS_PATH)
	mkdir -p $(OBJS_1_PATH)
	mkdir -p $(OBJS_2_PATH)
	mkdir -p $(OBJS_3_PATH)

$(NAME): mkdirs $(OBJS)
	$(MAKE) -C $(LIBFT_PATH) 
	$(AR) $(NAME) $(OBJS_1) $(OBJS_2)
	mv $(LIBFT_PATH)/*.o $(OBJS_3_PATH)
	mv $(OBJS_2) $(OBJS_2_PATH)
	mv $(OBJS_1) $(OBJS_1_PATH) 

clean:
	rm -rf $(OBJECTS_PATH)

fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C $(LIBFT_PATH)

re: fclean all

.PHONY: all clean fclean re
