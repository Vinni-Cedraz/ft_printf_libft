# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 16:47:53 by vcedraz-          #+#    #+#              #
#    Updated: 2022/10/27 13:17:31 by vcedraz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a


CFLAGS = -Wall -Werror -Wextra

AR = ar -rsc

RM = rm -f

OBJS_PATH = ./objs/

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
	ft_itoa_base.c \
	

OBJECTS = $(SRCS:%.c=$(OBJS_PATH)%.o)


all : $(NAME) 


$(OBJS_PATH)%.o : %.c
	@mkdir -p $(OBJS_PATH)
	$(CC) $(CFLAGS) -c $< -o $@


$(NAME) : $(OBJECTS)
	@$(AR) $(NAME) $(OBJECTS) 


clean :
	$(RM) -rf $(OBJS_PATH)


fclean : clean
	$(RM) $(NAME)


re : fclean all


.PHONY : clean fclean re bonus 
