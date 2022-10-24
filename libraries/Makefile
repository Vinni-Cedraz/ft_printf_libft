# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 16:47:53 by vcedraz-          #+#    #+#              #
#    Updated: 2022/10/23 22:26:47 by vcedraz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

FLAGS = -Wall -Werror -Wextra

CREATE_LIB = ar -rsc

RM = rm -f

OBJS_PATHS = ./objs/

SOURCES = ft_isalpha.c \
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
	

OBJECTS = $(SOURCES:.c=.o)

BONUS_SOURCES = ft_lstnew.c \
       ft_lstadd_front.c \
       ft_lstsize.c \
       ft_lstlast.c \
       ft_lstadd_back.c \
       ft_lstdelone.c \

BONUS_OBJECTS = $(BONUS_SOURCES:.c=.o)

#recipes

all : $(NAME) 

mkdirs:
	mkdir -p $(OBJS_PATHS)

$(NAME) : mkdirs $(OBJECTS)
	$(CREATE_LIB) $(NAME) $(OBJECTS)
	mv $(OBJECTS) $(OBJS_PATHS)

$(OBJECTS) :
	$(CC) $(FLAGS) -c $(SOURCES) 

clean :
	$(RM) $(OBJECTS) $(BONUS_OBJECTS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

bonus : $(BONUS_OBJECTS) 

$(BONUS_OBJECTS) : mkdirs 
	$(CC) $(FLAGS) -c $(@:.o=.c)
	$(CREATE_LIB) $(NAME) $@
	mv $@ $(OBJS_PATHS)

.PHONY : clean fclean re bonus 
