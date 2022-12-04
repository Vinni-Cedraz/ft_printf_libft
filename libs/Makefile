# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 11:11:55 by vcedraz-          #+#    #+#              #
#    Updated: 2022/12/03 22:31:52 by vcedraz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## VARIABLES ##

SHELL := /bin/bash

NAME = libft.a

NAME_BONUS = libft_bonus.a

NAME_PRNTF = libft_printf.a

NAME_FDF = libft_fdf.a

CFLAGS = -Wall -Werror -Wextra -g

AR = ar -rs

RM = rm -f

OBJS_PATH = ./objs/

OBJSB_PATH = ./objs_bonus/

PRNTF_OBJS_PATH = ./objs_printf/

FDF_OBJS_PATH = ./objs_fdf/

DEF_COLOR = \033[0;39m
GRAY = \033[0;37m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

SRCS = ft_atoi \
ft_free_arr \
ft_memchr \
ft_memcmp \
ft_putchar \
ft_putchar_fd \
ft_strlen \
ft_strncmp \
ft_word_counter \
ft_abs \
ft_isalpha \
ft_isascii \
ft_isdigit \
ft_isprint \
ft_memcpy \
ft_memorylen \
ft_memset \
ft_numlen \
ft_putstr \
ft_putstr_fd \
ft_striteri \
ft_strrchr \
ft_strrev \
ft_tolower \
ft_toupper \
ft_bzero \
ft_memmove \
ft_putendl_fd \
ft_rev_int_tab \
ft_sort_int_tab \
ft_strchr \
ft_strmapi \
ft_strnstr \
ft_calloc \
ft_isalnum \
ft_strdup \
ft_strlcat \
ft_itoa_base \
ft_strjoin \
ft_strtrim \
ft_swap \
ft_putnbr_fd \
ft_substr \
ft_split \
ft_strlcpy \
ft_itoa \
ft_hexdump \
ft_gnl \

BSRCS = ft_lstadd_back \
ft_lstadd_front \
ft_lstdelone \
ft_lstlast \
ft_lstnew \
ft_lstsize \
	
PRNTF_SRCS = ft_putchar \
ft_strlen \
ft_memset \
ft_calloc \
ft_itoa_base \

FDF_SRCS = ft_strlen \
ft_memchr \
ft_memcpy \
ft_memmove \
ft_strlcpy \
ft_strdup \
ft_strlcat \
ft_strjoin \
ft_gnl \
		
OBJS = $(patsubst %, $(OBJS_PATH)%.o, $(SRCS))
OBJSB = $(patsubst %, $(OBJSB_PATH)%.o, $(BSRCS))
OBJS_PRNTF = $(patsubst %, $(PRNTF_OBJS_PATH)%.o, $(PRNTF_SRCS))
OBJS_FDF = $(patsubst %, $(FDF_OBJS_PATH)%.o, $(FDF_SRCS))
MOD_OBJ = $(shell find . -name "*.o" -type f -newer $(NAME))
MOD_OBJB = $(shell find . -name "*.o" -type f -newer $(NAME_BONUS))
MOD_OBJ_PRNTF = $(shell find . -name "*.o" -type f -newer $(NAME_PRNTF))
MOD_OBJ_FDF = $(shell find . -name "*.o" -type f -newer $(NAME_FDF))

all : $(NAME) 

bonus : $(NAME_BONUS)

srcs_to_printf : $(NAME_PRNTF)

srcs_to_fdf : $(NAME_FDF)

$(NAME) : $(OBJS)
	@for file in $(MOD_OBJ); do \
		printf "\n$(CYAN)linking: $(WHITE)$$file$(DEF_COLOR)\n"; \
		printf "ar -rsc $(NAME) $$file\n"; \
		ar -rsc $(NAME) $$file; \
	done
	@for file in $(SRCS); do \
	if [ ! -f $(NAME) ]; then \
		ar -rsc $(NAME) $(OBJS_PATH)$$file.o; \
		printf "\n$(CYAN)linking: $(WHITE)$$file$(DEF_COLOR)\n"; \
		printf "ar -rsc $(NAME) $$file\n"; \
	fi; \
	if [[ -z "$$(nm $(NAME) | grep $${file})" ]]; then \
		ar -rsc $(NAME) $(OBJS_PATH)$$file.o; \
		printf "\n$(CYAN)linking: $(WHITE)$$file$(DEF_COLOR)\n"; \
		printf "ar -rsc $(NAME) $$file\n"; \
	fi; \
	done
	@if [ -f $(NAME) ]; then \
		printf "\n$(RED)$(NAME) $(WHITE)created$(DEF_COLOR)\n"; \
	fi

$(NAME_PRNTF) : $(OBJS_PRNTF)
	@for file in $(MOD_OBJ_PRNTF); do \
		printf "\n$(CYAN)linking: $(WHITE)$$file$(DEF_COLOR)\n"; \
		printf "ar -rsc $(NAME_PRNTF) $$file\n"; \
		ar -rsc $(NAME_PRNTF) $$file; \
	done
	@for file in $(PRNTF_SRCS); do \
	if [ ! -f $(NAME_PRNTF) ]; then \
		ar -rsc $(NAME_PRNTF) $(PRNTF_OBJS_PATH)$$file.o; \
		printf "\n$(CYAN)linking: $(WHITE)$$file$(DEF_COLOR)\n"; \
		printf "ar -rsc $(NAME_PRNTF) $$file\n"; \
	fi; \
	if [[ -z "$$(nm $(NAME_PRNTF) | grep $${file})" ]]; then \
		ar -rsc $(NAME_PRNTF) $(PRNTF_OBJS_PATH)$$file.o; \
		printf "\n$(CYAN)linking: $(WHITE)$$file$(DEF_COLOR)\n"; \
		printf "ar -rsc $(NAME_PRNTF) $$file\n"; \
	fi; \
	done
	@if [ -f $(NAME_PRNTF) ]; then \
		printf "\n$(RED)$(NAME_PRNTF) $(WHITE)created$(DEF_COLOR)\n"; \
	fi

$(NAME_FDF) : $(OBJS_FDF)
	@for file in $(MOD_OBJ_FDF); do \
		printf "\n$(CYAN)linking: $(WHITE)$$file$(DEF_COLOR)\n"; \
		printf "ar -rsc $(NAME_FDF) $$file\n"; \
		ar -rsc $(NAME_FDF) $$file; \
	done
	@for file in $(FDF_SRCS); do \
	if [ ! -f $(NAME_FDF) ]; then \
		ar -rsc $(NAME_FDF) $(FDF_OBJS_PATH)$$file.o; \
		printf "\n$(CYAN)linking: $(WHITE)$$file$(DEF_COLOR)\n"; \
		printf "ar -rsc $(NAME_FDF) $$file\n"; \
	fi; \
	if [[ -z "$$(nm $(NAME_FDF) | grep $${file})" ]]; then \
		ar -rsc $(NAME_FDF) $(FDF_OBJS_PATH)$$file.o; \
		printf "\n$(CYAN)linking: $(WHITE)$$file$(DEF_COLOR)\n"; \
		printf "ar -rsc $(NAME_FDF) $$file\n"; \
	fi; \
	done
	@if [ -f $(NAME_FDF) ]; then \
		printf "\n$(RED)$(NAME_FDF) $(WHITE)created$(DEF_COLOR)\n"; \
	fi

$(NAME_BONUS) : $(NAME) $(OBJSB)
	@cp $(NAME) $(NAME_BONUS)
	@for file in $(MOD_OBJB); do \
		printf "\n$(CYAN)linking: $(WHITE)$$file$(DEF_COLOR)\n"; \
		printf "ar -rsc $(NAME_BONUS) $$file\n"; \
		ar -rsc $(NAME_BONUS) $$file; \
	done
	@for file in $(BSRCS); do \
	if [ ! -f $(NAME_BONUS) ]; then \
		ar -rsc $(NAME_BONUS) $(OBJSB_PATH)$$file.o; \
		printf "\n$(CYAN)linking: $(WHITE)$$file$(DEF_COLOR)\n"; \
		printf "ar -rsc $(NAME_BONUS) $$file\n"; \
	fi; \
	if [[ -z "$$(nm $(NAME_BONUS) | grep $${file})" ]]; then \
		ar -rsc $(NAME_BONUS) $(OBJSB_PATH)$$file.o; \
		printf "\n$(CYAN)linking: $(WHITE)$$file$(DEF_COLOR)\n"; \
		printf "ar -rsc $(NAME_BONUS) $$file\n"; \
	fi; \
	done
	@if [ -f $(NAME_BONUS) ]; then \
		printf "\n$(RED)$(NAME_BONUS) $(WHITE)created$(DEF_COLOR)\n"; \
	fi

$(OBJS_PATH)%.o : %.c
	@printf "\n$(YELLOW)Compiling All libft Sources...$(DEF_COLOR)\n"
	@make LIBFT_LOOP --no-print-directory

$(OBJSB_PATH)%.o : %.c
	@printf "\n$(YELLOW)Compiling Bonus libft Sources...$(DEF_COLOR)\n"
	@make BONUS_LIBFT_LOOP --no-print-directory

$(PRNTF_OBJS_PATH)%.o : %.c
	@printf "\n$(YELLOW)Compiling libft Sources... $(DEF_COLOR)\n"
	@make PRNTF_LOOP --no-print-directory

$(FDF_OBJS_PATH)%.o : %.c
	@printf "\n$(YELLOW)Compiling libft Sources... $(DEF_COLOR)\n"
	@make FDF_LOOP --no-print-directory

FDF_LOOP :
	@mkdir -p $(FDF_OBJS_PATH)
	@for file in $(FDF_SRCS); do \
	if [ $$file.c -nt $(FDF_OBJS_PATH)$$file.o ]; then \
		printf "$(CYAN)Compiling $(WHITE)$$file.c...$(DEF_COLOR)\n"; \
		$(CC) $(CFLAGS) -c $$file.c -o $(FDF_OBJS_PATH)$$file.o; \
		printf "$(CC) $(CFLAGS) -c $$file.c -o $(FDF_OBJS_PATH)$$file.o$(DEF_COLOR)\n"; \
		printf "$(WHITE)$$file.c $(GREEN)OK$(DEF_COLOR)\n"; \
	fi; \
	done

PRNTF_LOOP :
	@mkdir -p $(PRNTF_OBJS_PATH)
	@for file in $(PRNTF_SRCS); do \
		if [ $$file.c -nt $(PRNTF_OBJS_PATH)$$file.o ]; then \
		printf "$(CYAN)Compiling $(WHITE)$$file$(DEF_COLOR)\n"; \
		$(CC) $(CFLAGS) -c $$file.c -o $(PRNTF_OBJS_PATH)$$file.o; \
		printf "$(CC) $(CFLAGS) -c $$file.c -o $(PRNTF_OBJS_PATH)$$file.o\n"; \
		printf "$(WHITE)$$file$(GREEN) OK\n\n$(DEF_COLOR)"; \
		fi; \
	done
	@printf "$(GREEN)Objects Compiled Into $(WHITE)$(PRNTF_OBJS_PATH)$(DEF_COLOR)\n" \

LIBFT_LOOP :
	@mkdir -p $(OBJS_PATH)
	@for file in $(SRCS); do \
		if [ $$file.c -nt $(OBJS_PATH)$$file.o ]; then \
		printf "$(CYAN)Compiling $(WHITE)$$file$(DEF_COLOR)\n"; \
		$(CC) $(CFLAGS) -c $$file.c -o $(OBJS_PATH)$$file.o; \
		printf "$(CC) $(CFLAGS) -c $$file.c -o $(OBJS_PATH)$$file.o\n"; \
		printf "$(WHITE)$$file$(GREEN) OK\n\n$(DEF_COLOR)"; \
		fi; \
	done
	@printf "$(GREEN)Objects Compiled Into $(WHITE)$(OBJS_PATH)$(DEF_COLOR)\n" \

BONUS_LIBFT_LOOP :
	@mkdir -p $(OBJSB_PATH)
	@for file in $(BSRCS); do \
		if [ $$file.c -nt $(OBJSB_PATH)$$file.o ]; then \
		printf "$(CYAN)Compiling $(WHITE)$$file$(DEF_COLOR)\n"; \
		$(CC) $(CFLAGS) -c $$file.c -o $(OBJSB_PATH)$$file.o; \
		printf "$(CC) $(CFLAGS) -c $$file.c -o $(OBJSB_PATH)$$file.o\n"; \
		printf "$(WHITE)$$file$(GREEN) OK\n\n$(DEF_COLOR)"; \
		fi; \
	done
	@printf "$(GREEN)Objects Compiled Into $(WHITE)$(OBJSB_PATH)$(DEF_COLOR)\n" \

clean :
	@rm -rf $(OBJS_PATH)
	@rm -rf $(OBJSB_PATH)
	@rm -rf $(PRNTF_OBJS_PATH)
	@rm -rf $(FDF_OBJS_PATH)
	@rm -f a.out

clean_printf:
	@rm -rf $(PRNTF_OBJS_PATH)
	@rm -f a.out
	@printf "$(RED)Printf Objects From Libft Removed$(DEF_COLOR)\n"

fclean : clean
	$(RM) *.a

re : fclean all

phony : all clean fclean re bonus printf

