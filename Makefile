# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luguaman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 13:46:12 by luguaman          #+#    #+#              #
#    Updated: 2023/10/19 13:25:53 by luguaman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

RM = rm -rf
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

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
	ft_itoa.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	@ar crs $(NAME) $(OBJS)
	@echo "\nLIBFT created\n"

all: $(NAME)

%.o : %.c
	@$(CC) $(CFLAGS) -c -o $@ $<  

clean:
	@$(RM) $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
