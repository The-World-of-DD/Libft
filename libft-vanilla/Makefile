# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/25 19:50:54 by dierojas          #+#    #+#              #
#    Updated: 2025/04/07 14:55:42 by dierojas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = \
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c
OBJS = $(SRCS:.c=.o)
BONUSOBJ = $(BONUS:.c=.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar

all: $(NAME)

$(NAME): $(OBJS) $(BONUSOBJ)
	$(AR) -r $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJS) $(BONUSOBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

bonus:	$(OBJS) $(BONUSOBJ)
	ar rcs $(NAME) $(OBJS) $(BONUSOBJ)

.PHONY: all clean fclean re bonus
