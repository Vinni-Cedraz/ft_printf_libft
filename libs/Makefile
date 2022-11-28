# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 11:11:55 by vcedraz-          #+#    #+#              #
#    Updated: 2022/11/28 20:46:57 by vcedraz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## VARIABLES ##

NAME = libft.a

NAME_BONUS = libft_bonus.a

NAME_PRNTF = libs_printf.a

CFLAGS = -Wall -Werror -Wextra -g

AR = ar -rs

RM = rm -f

OBJS_PATH = ./objs/

OBJSB_PATH = ./objs_bonus/

PRNTF_OBJS_PATH = ./objs_printf/

DEF_COLOR = \033[0;39m
GRAY = \033[0;37m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

SRCS = ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_strlen.c \
ft_memset.c \
ft_bzero.c \
ft_memcpy.c \
ft_memmove.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_toupper.c \
ft_tolower.c \
ft_strchr.c \
ft_strrchr.c \
ft_strncmp.c \
ft_memchr.c \
ft_memcmp.c \
ft_strnstr.c \
ft_atoi.c \
ft_calloc.c \
ft_strdup.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_split.c \
ft_itoa.c \
ft_strmapi.c \
ft_striteri.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_abs.c \
ft_strrev.c \
ft_free_arr.c \
ft_numlen.c \
ft_word_counter.c \
ft_putchar.c \
ft_putstr.c \
ft_itoa_base.c \
ft_swap.c \
ft_rev_int_tab.c \
ft_putstr_non_printable.c \
ft_sort_int_tab.c \
ft_memorylen.c \

BSRCS = ft_lstadd_back.c \
ft_lstadd_front.c \
ft_lstdelone.c \
ft_lstlast.c \
ft_lstnew.c \
ft_lstsize.c \
	
PRNTF_SRCS = ft_putchar \
ft_itoa_base \
ft_calloc \
ft_strlen \
ft_memset \

OBJS = $(patsubst %.c, $(OBJS_PATH)%.o, $(SRCS))
OBJSB = $(patsubst %.c, $(OBJSB_PATH)%.o, $(BSRCS))
OBJS_PRNTF = $(patsubst %, $(PRNTF_OBJS_PATH)%.o, $(PRNTF_SRCS))

all : $(NAME) 

bonus : $(NAME_BONUS)

srcs_to_printf : $(NAME_PRNTF)

$(NAME_PRNTF) : $(OBJS_PRNTF)
	@ar -rsc $(NAME_PRNTF) $(OBJS_PRNTF)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS) 

$(OBJS_PATH)%.o : %.c
	@mkdir -p $(OBJS_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJSB_PATH)%.o : %.c
	@mkdir -p $(OBJSB_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

$(PRNTF_OBJS_PATH)%.o : %.c
	@make PRNTF_LOOP

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

$(NAME_BONUS) : $(NAME) $(OBJSB)
	cp $(NAME) $(NAME_BONUS)
	$(AR) $(NAME_BONUS) $(OBJSB)

clean :
	@rm -rf $(OBJS_PATH)
	@rm -rf $(OBJSB_PATH)
	@rm -rf $(PRNTF_OBJS_PATH)
	@rm -f a.out
	@rm -f compile_commands.json


clean_printf:
	@rm -rf $(PRNTF_OBJS_PATH)
	@rm -f a.out
	@rm -f compile_commands.json
	@printf "$(RED)Printf Objects From Libft Removed$(DEF_COLOR)\n"


fclean : clean
	$(RM) *.a


re : fclean all


phony : all clean fclean re bonus printf
