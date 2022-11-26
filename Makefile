# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 12:57:13 by vcedraz-          #+#    #+#              #
#    Updated: 2022/11/26 20:13:41 by vcedraz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## VARIABLES ##

NAME     = libftprintf.a
FLAGS    = -Wall -Wextra -Werror $(INCLUDES)
INCLUDES = -I./includes -I./libs/libft

# Colors
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

SRCS_1_FAKE = ft_printf \
			 parser \
		   is_format \
		  print_until \

SRCS_1_TRUE = $(addsuffix .c, $(SRCS_1_FAKE))

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
OBJS_1 = $(patsubst %, $(OBJS_1_PATH)%, $(SRCS_1_TRUE:.c=.o))
OBJS_2 = $(SRCS_2:%.c=$(OBJS_2_PATH)%.o)
OBJS_3 = $(SRCS_3:%.c=$(OBJS_3_PATH)%.o)

## RULES ##

all: $(NAME)

$(NAME): $(OBJS_1) $(OBJS_2)
	@echo "$(YELLOW)Compiling libft Sources... $(DEF_COLOR)"
	make printf -C $(SRCS_3_PATH)
	@echo "$(GREEN)Sources Compiled, Objects Created! $(DEF_COLOR)"
	@echo "$(YELLOW)Creating Libftprintf.a... $(DEF_COLOR)"
	ar -rs $(NAME) $(OBJS_1_PATH)*.o $(OBJS_2_PATH)*.o $(OBJS_3_PATH)*.o
	@echo "$(GREEN)Libftprintf.a Created! $(DEF_COLOR)"

LOOP : 
	@mkdir -p $(OBJS_1_PATH)
	@echo "$(CYAN)Compiling Primary Sources... $(DEF_COLOR)"
	 @for file in $(SRCS_1_TRUE); do \
	 	echo "$(GRAY)Compiling $$file... $(DEF_COLOR)"; \
		cc $(FLAGS) -c $(SRCS_1_PATH)$$file -o $(OBJS_1_PATH)$$file.o; \
	 	echo "$(GREEN)$$file Compiled! $(DEF_COLOR)"; \
	 done
	@echo "$(YELLOW)Primary Objects Created in $(OBJS_1_PATH) $(DEF_COLOR)"


$(OBJS_1_PATH)%.o: LOOP $(SRCS_1_PATH)%.c
	
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
