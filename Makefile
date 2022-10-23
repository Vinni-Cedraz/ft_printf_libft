# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/30 02:45:29 by tkomeno           #+#    #+#              #
#    Updated: 2022/10/23 01:09:29 by vcedraz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT_PATH = ./libraries
OBJECTS_PATH = ./objects
SOURCES_PATH = ./sources
PARSERS_PATH = ./sources/parsers


SOURCE_FILES = ft_printf.c \
				is_format.c \
				print_format.c \
				parser.c \


PARSERS_FILES = decimal.c \
				hex.c \
				percent.c \
				pointer.c \
				string.c \
				usdecimal.c \

OBJS_1 = $(addprefix $(PARSERS_PATH)/,$(PARSERS_FILES))

OBJS_2 = $(addprefix $(SOURCES_PATH)/,$(SOURCE_FILES))

OBJS = $(OBJS_1) $(OBJS_2)

INCLUDES = -I./includes -I./libraries/libft

FLAGS = cc -g -Wall -Wextra -Werror

AR = ar -cr

all: $(NAME)

mkdirs:
	mkdir -p $(OBJECTS_PATH)

$(NAME): mkdirs 
	$(MAKE) -C $(LIBFT_PATH) 
	mv $(LIBFT_PATH)/*.o $(OBJECTS_PATH)
	$(FLAGS) $(INCLUDES) -c $(OBJS)
	mv ./*.o $(OBJECTS_PATH)
	$(AR) $(NAME) $(OBJECTS_PATH)/*.o

clean:
	rm -rf $(OBJECTS_PATH)

fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C $(LIBFT_PATH)

re: fclean all

.PHONY: all clean fclean re
