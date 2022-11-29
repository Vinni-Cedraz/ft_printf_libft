# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 12:57:13 by vcedraz-          #+#    #+#              #
#    Updated: 2022/11/28 21:48:45 by vcedraz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## VARIABLES ##

NAME     = libftprintf.a
FLAGS    = -Wall -Wextra -Werror $(INCLUDES)
INCLUDES = -I./includes -I./libs/libft

# Colors
DEF_COLOR = \033[0;39m
GRAY = \033[0;37m
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

SRCS_2_FAKE = put_decimal \
              	   put_hex \
                put_pointer \
                  put_string \
                put_usdecimal \

SRCS_2_TRUE = $(addsuffix .c, $(SRCS_2_FAKE))

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
OBJS_2 = $(patsubst %, $(OBJS_2_PATH)%, $(SRCS_2_TRUE:.c=.o))
OBJS_3 = $(patsubst %, $(OBJS_3_PATH)%, $(SRCS_3:.c=.o))

## RULES ##

all: $(NAME)

$(NAME): $(OBJS_1) $(OBJS_2) $(OBJS_3)
	@printf "\n$(YELLOW)Compiling libft Sources... $(DEF_COLOR)\n"
	@printf "\n$(YELLOW)Creating libftprintf.a... $(DEF_COLOR)\n"
	ar -rcs $(NAME) $(OBJS_1_PATH)*.o $(OBJS_2_PATH)*.o $(OBJS_3_PATH)*.o
	@printf "\n$(WHITE)The $(RED)libftprintf.a $(WHITE)File Was Created In the Current Directory! $(DEF_COLOR)"

$(OBJS_1_PATH)%.o: $(SRCS_1_PATH)%.c
	@make LOOP1

$(OBJS_2_PATH)%.o: $(SRCS_2_PATH)%.c
	@make LOOP2

$(OBJS_3_PATH)%.o: $(SRCS_3_PATH)%.c
	make srcs_to_printf -C $(SRCS_3_PATH)

LOOP1 : 
	@mkdir -p $(OBJS_1_PATH)
	@printf "$(YELLOW)\nCompiling Primary Sources: $(DEF_COLOR)\n\n"
	 @for file in $(SRCS_1_FAKE); do \
	 	if [ $(SRCS_1_PATH)$$file.c -nt $(OBJS_1_PATH)$$file.o ]; then \
	 	printf "$(CYAN)Compiling $(WHITE)$$file.c... $(DEF_COLOR)\n"; \
		printf "cc $(FLAGS) -c $(SRCS_1_PATH)$$file.c -o $(OBJS_1_PATH)$$file.o\n"; \
		cc $(FLAGS) -c $(SRCS_1_PATH)$$file.c -o $(OBJS_1_PATH)$$file.o; \
	 	printf "$(WHITE)$$file $(GREEN)OK $(DEF_COLOR)\n"; \
		fi; \
	 done
	@printf "\n$(GREEN)Primary Objects Compiled Into $(WHITE)$(OBJS_1_PATH) $(DEF_COLOR)\n"

LOOP2 :
	@mkdir -p $(OBJS_2_PATH)
	@printf "$(YELLOW)\nCompiling Secondary Sources: $(DEF_COLOR)\n\n"
	 @for file in $(SRCS_2_FAKE); do \
	 	if [ $(SRCS_2_PATH)$$file.c -nt $(OBJS_2_PATH)$$file.o ]; then \
	 	printf "$(CYAN)Compiling $(WHITE)$$file.c... $(DEF_COLOR)\n"; \
		printf "cc $(FLAGS) -c $(SRCS_2_PATH)$$file.c -o $(OBJS_2_PATH)$$file.o\n"; \
		cc $(FLAGS) -c $(SRCS_2_PATH)$$file.c -o $(OBJS_2_PATH)$$file.o; \
	 	printf "$(WHITE)$$file $(GREEN)OK $(DEF_COLOR)\n"; \
		fi; \
	 done
	@printf "\n$(GREEN)Secondary Objects Compiled Into $(WHITE)$(OBJS_2_PATH) $(DEF_COLOR)\n"

footer:
	@printf "$(CYAN)$$FOOTER $(DEF_COLOR)"

clean:
	@rm -rf ./objs/
	@printf "$(RED)Objects Directory Removed $(DEF_COLOR)\n"
	@make clean_printf -C $(SRCS_3_PATH)

fclean: clean footer
	@$(RM) $(NAME)
	@rm -f $(SRCS_3_PATH)*.a
	@rm -f compile_commands.json
	@rm -f a.out
	@printf "\n$(RED)All Archive Files Were Removed $(DEF_COLOR)\n"

define FOOTER
    \            _ \                  _)      
   _ \   |   |  |   |  _ \\ \   / _ \  |  __| 
  ___ \  |   |  __ <   __/ \ \ / (   | | |    
_/    _\\__,_| _| \_\\___|  \_/ \___/ _|_|
endef
export FOOTER

re: fclean all

.PHONY: all clean fclean re
