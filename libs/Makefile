# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 11:11:55 by vcedraz-          #+#    #+#              #
#    Updated: 2022/11/25 00:18:43 by vcedraz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

NAME_BONUS = libft_bonus.a

NAME_PRNTF = libs_printf.a

CFLAGS = -Wall -Werror -Wextra -g

AR = ar -rs

RM = rm -f

OBJS_PATH = ./objs/

OBJSB_PATH = ./objs_bonus/

PRNTF_OBJS_PATH = ./objs_printf/

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
	
PRNTF_SRCS = ft_putchar.c \
ft_itoa_base.c \
ft_calloc.c \
ft_strlen.c \
ft_memset.c \

OBJS = $(patsubst %.c, $(OBJS_PATH)%.o, $(SRCS))
OBJSB = $(patsubst %.c, $(OBJSB_PATH)%.o, $(BSRCS))
OBJS_PRNTF = $(patsubst %.c, $(PRNTF_OBJS_PATH)%.o, $(PRNTF_SRCS))


all : $(NAME) 

bonus : $(NAME_BONUS)

printf : $(NAME_PRNTF)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS) 

$(OBJS_PATH)%.o : %.c
	@mkdir -p $(OBJS_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJSB_PATH)%.o : %.c
	@mkdir -p $(OBJSB_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

$(PRNTF_OBJS_PATH)%.o : %.c
	@mkdir -p $(PRNTF_OBJS_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME_BONUS) : $(NAME) $(OBJSB)
	cp $(NAME) $(NAME_BONUS)
	$(AR) $(NAME_BONUS) $(OBJSB)

$(NAME_PRNTF) : $(OBJS_PRNTF)
	$(AR) $(NAME_PRNTF) $(OBJS_PRNTF)

clean :
	rm -rf $(OBJS_PATH)
	rm -rf $(OBJSB_PATH)
	rm -rf $(PRNTF_OBJS_PATH)
	@rm -f a.out
	@rm -f compile_commands.json

clean_printf:
	rm -rf $(PRNTF_OBJS_PATH)
	@rm -f a.out
	@rm -f compile_commands.json

fclean : clean
	$(RM) *.a

re : fclean all

phony : all clean fclean re bonus printf
