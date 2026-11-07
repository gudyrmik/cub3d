# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anurmach <anurmach@student.42prague.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/14 15:55:24 by anurmach          #+#    #+#              #
#    Updated: 2026/10/13 16:49:23 by anurmach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC := src
HEADERS := headers
LIBFTD := libft
CC := cc
CFLAGS := -Wall -Wextra -Werror -MMD -MP -I $(HEADERS)
RM := rm -f

SRCS := $(SRC)/main.c \
	$(SRC)/read_map.c \
	$(SRC)/errors.c

NAME := cub3D
LIBFT := $(LIBFTD)/libft.a
OBJS := $(SRCS:.c=.o)
DEP := $(OBJS:.o=.d)

all : $(NAME)

$(NAME) : $(LIBFT) $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $@

$(SRC)/%.o : $(SRC)/%.c
		$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT) :
	$(MAKE) -C $(LIBFTD)

-include $(DEP)

clean:
		$(MAKE) clean -C $(LIBFTD)
		$(RM) $(OBJS) $(DEP)

fclean: clean
		$(RM) $(NAME)
		$(MAKE) fclean -C $(LIBFTD)

re: fclean all

.PHONY: all clean fclean re
