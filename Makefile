# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/30 02:45:29 by tkomeno           #+#    #+#              #
#    Updated: 2022/10/24 00:46:39 by vcedraz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT_PATH = ./libraries/
OBJS_0_PATH = ./objects
OBJS_1_PATH = ./objects/printf
OBJS_2_PATH = ./objects/converters_printers

SOURCES_PATH = ./sources/printf
CONVERTERS_PATH = ./sources/converters_printers


SOURCE_FILES = printf.c \
				print_format.c \
				parser.c \


CONVERTERS_FILES = _decimal.c \
				_hex.c \
				_percent.c \
				_pointer.c \
				_string.c \
				_usdecimal.c \


SRCS_1 = $(addprefix $(SOURCES_PATH)/,$(SOURCE_FILES))

SRCS_2 = $(addprefix $(CONVERTERS_PATH)/,$(CONVERTERS_FILES))

OBJS_1 = $(addprefix $(OBJS_1_PATH)/,$(SOURCE_FILES:.c=.o))

OBJS_2 = $(addprefix $(OBJS_2_PATH)/,$(CONVERTERS_FILES:.c=.o))

OBJS_3 = $(LIBFT_PATH)libft.a

INCLUDES = -I./includes -I./libraries/libft

FLAGS = cc -g -Wall -Wextra -Werror

AR = ar -cr

all: $(NAME)

mkdirs:
	mkdir -vp $(OBJS_2_PATH)
	mkdir -vp $(OBJS_1_PATH)

$(NAME): mkdirs
	$(MAKE) -C $(LIBFT_PATH)
	$(FLAGS) $(INCLUDES) -c $(SRCS_2)
	$(FLAGS) $(INCLUDES) -c $(SRCS_1)
	mv ./_*.o $(OBJS_2_PATH)
	mv ./p*.o $(OBJS_1_PATH)
	$(AR) $(NAME) $(OBJS_3) $(OBJS_2) $(OBJS_1)


clean:
	rm -rf $(OBJS_0_PATH)

fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C $(LIBFT_PATH)

re: fclean all

.PHONY: all clean fclean re
