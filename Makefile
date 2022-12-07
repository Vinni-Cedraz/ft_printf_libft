# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 12:57:13 by vcedraz-          #+#    #+#              #
#    Updated: 2022/12/07 12:19:18 by vcedraz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## VARIABLES ##

SHELL := /bin/bash
NAME = printf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs
INCLUDES = -Iincludes/ -Ilibft/
OBJS_1_PATH = ./objs/pivot/
OBJS_2_PATH = ./objs/aux/
OBJS_3_PATH = ./libft/objs_printf/
LIBFT_PATH = ./libft/
DEF_COLOR = \033[0;39m
GRAY = \033[0;37m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

SRCS_1 = ft_printf \
		  ft_printf \
		   is_format \
		       parser \
		   print_until \

SRCS_2 = put_decimal \
		 	  put_hex \
		   put_pointer \
		     put_string \
		   put_usdecimal \

SRCS_3 = ft_putchar \
           ft_calloc \
            ft_strlen \
             ft_memset \
           ft_itoa_base \ 

SRCS_1_PATH = ./srcs/pivot/
SRCS_2_PATH = ./srcs/aux/
SRCS_3_PATH = ./libft/
OBJS_1 = $(patsubst %, $(OBJS_1_PATH)%.o, $(SRCS_1))
OBJS_2 = $(patsubst %, $(OBJS_2_PATH)%.o, $(SRCS_2))
OBJS_3 = $(patsubst %, $(OBJS_3_PATH)%.o, $(SRCS_3))
OBJS_1_MOD = $(shell find $(OBJS_1_PATH)*.o -newer $(NAME))
OBJS_2_MOD = $(shell find $(OBJS_2_PATH)*.o -newer $(NAME))
OBJS_3_MOD = $(shell find $(OBJS_3_PATH)*.o -newer $(NAME))

## RULES ##
all: $(NAME)

libft :
	@make srcs_to_printf -C  $(LIBFT_PATH)
		
$(NAME): $(OBJS_1) $(OBJS_2)
	@make srcs_to_printf -C $(LIBFT_PATH) --no-print-directory
	@printf "\n$(YELLOW)Linking Objects to Library...$(DEF_COLOR)\n";
	@for file in $(OBJS_1_MOD); do \
		printf "\n$(CYAN)Linking $(WHITE)$$file $(GRAY)to $(RED)$(NAME)$(DEF_COLOR)\n"; \
		printf "ar -rsc $(NAME) $$file\n"; \
		ar -rsc $(NAME) $$file; \
		printf "$(WHITE)$$file $(GREEN)OK$(DEF_COLOR)\n"; \
	done
	@for file in $(OBJS_2_MOD); do \
		printf "\n$(CYAN)Linking $(WHITE)$$file $(GRAY)to $(RED)$(NAME)$(DEF_COLOR)\n"; \
		printf "ar -rsc $(NAME) $$file\n"; \
		ar -rsc $(NAME) $$file; \
		printf "$(WHITE)$$file $(GREEN)OK$(DEF_COLOR)\n"; \
	done
	@for file in $(OBJS_3_MOD); do \
		printf "\n$(CYAN)Linking $(WHITE)$$file $(GRAY)to $(RED)$(NAME)$(DEF_COLOR)\n"; \
		printf "ar -rsc $(NAME) $$file\n"; \
		ar -rsc $(NAME) $$file; \
		printf "$(WHITE)$$file $(GREEN)OK$(DEF_COLOR)\n"; \
	done
	@for file in $(SRCS_1); do \
		if [[ -z "$$(nm $(NAME) | grep $${file}.o:)" ]]; then \
		printf "\n$(CYAN)Linking $(WHITE)$$file.o $(GRAY)to $(RED)$(NAME)$(DEF_COLOR)\n"; \
		ar -rsc $(NAME) $(OBJS_1_PATH)$$file.o; \
		printf "ar -rsc $(NAME) $$file.o\n"; \
		printf "$(WHITE)$$file $(GREEN)OK$(DEF_COLOR)\n"; \
	fi; \
	done
	@for file in $(SRCS_2); do \
		if [[ -z "$$(nm $(NAME) | grep $${file}.o:)" ]]; then \
		printf "\n$(CYAN)Linking $(WHITE)$$file.o $(GRAY)to $(RED)$(NAME)$(DEF_COLOR)\n"; \
		ar -rsc $(NAME) $(OBJS_2_PATH)$$file.o; \
		printf "ar -rsc $(NAME) $$file.o\n"; \
		printf "$(WHITE)$$file $(GREEN)OK$(DEF_COLOR)\n"; \
	fi; \
	done
	@for file in $(SRCS_3); do \
		if [[ -z "$$(nm $(NAME) | grep $${file}.o:)" ]]; then \
		printf "\n$(CYAN)Linking $(WHITE)$$file.o $(GRAY)to $(RED)$(NAME)$(DEF_COLOR)\n"; \
		ar -rsc $(NAME) $(OBJS_3_PATH)$$file.o; \
		printf "ar -rsc $(NAME) $$file.o\n"; \
		printf "$(WHITE)$$file $(GREEN)OK$(DEF_COLOR)\n"; \
	fi; \
	done

#these are the correct pre-requisites for the objects:
$(OBJS_1_PATH)%.o: $(SRCS_1_PATH)%.c
	@mkdir -p $(OBJS_1_PATH)
	@make SRCS_1_CC --no-print-directory

$(OBJS_2_PATH)%.o: $(SRCS_2_PATH)%.c
	@mkdir -p $(OBJS_2_PATH)
	@make SRCS_2_CC --no-print-directory

SRCS_1_CC:
	@for file in $(SRCS_1); do \
	if [ $(SRCS_1_PATH)$$file.c -nt $(OBJS_1_PATH)$$file.o ]; then \
		printf "\n$(CYAN)Compiling $(WHITE)$$file.c $(DEF_COLOR)\n"; \
		printf "$(CC) $(CFLAGS) $(INCLUDES) -c $(SRCS_1_PATH)$$file.c -o $(OBJS_1_PATH)$$file.o\n"; \
		$(CC) $(CFLAGS) $(INCLUDES) -c $(SRCS_1_PATH)$$file.c -o $(OBJS_1_PATH)$$file.o; \
		printf "$(WHITE)$$file $(GREEN)OK$(DEF_COLOR)\n"; \
	fi; \
	done

SRCS_2_CC:
	@for file in $(SRCS_2); do \
	if [ $(SRCS_2_PATH)$$file.c -nt $(OBJS_2_PATH)$$file.o ]; then \
		printf "\n$(CYAN)Compiling $(WHITE)$$file.c $(DEF_COLOR)\n"; \
		printf "$(CC) $(CFLAGS) $(INCLUDES) -c $(SRCS_2_PATH)$$file.c -o $(OBJS_2_PATH)$$file.o\n"; \
		$(CC) $(CFLAGS) $(INCLUDES) -c $(SRCS_2_PATH)$$file.c -o $(OBJS_2_PATH)$$file.o; \
		printf "$(WHITE)$$file $(GREEN)OK$(DEF_COLOR)\n"; \
	fi; \
	done

clean:
	@if [ -d $(OBJS_1_PATH) ]; then \
		printf "$(GRAY)rm -rf $(OBJS_1_PATH)$(DEF_COLOR)"; \
		printf "\n$(RED)Primary Objects Deleted.$(DEF_COLOR)\n"; \
		rm -rf $(OBJS_1_PATH); \
	fi
	@if [ -d $(OBJS_2_PATH) ]; then \
		printf "$(GRAY)rm -rf $(OBJS_2_PATH)$(DEF_COLOR)"; \
		printf "\n$(RED)Secondary Objects Deleted.$(DEF_COLOR)\n"; \
		rm -rf $(OBJS_2_PATH); \
	fi
	@rm -rf ./objs/
	@if [ -d $(OBJS_3_PATH) ]; then \
		printf "$(GRAY)rm -rf $(OBJS_3_PATH)$(DEF_COLOR)"; \
		printf "\n$(RED)Objects From Libft Deleted.$(DEF_COLOR)\n"; \
		rm -rf $(OBJS_3_PATH); \
	fi

fclean: clean
	@if [ -f $(NAME) ]; then \
		rm -f $(NAME); \
		printf "$(GRAY)rm -f $(NAME)$(DEF_COLOR)\n"; \
		printf "$(RED)$(NAME) $(GRAY)Deleted, Au Revoir.$(DEF_COLOR)\n"; \
	fi

re: fclean all

.PHONY: all clean fclean re
