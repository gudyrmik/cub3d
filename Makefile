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
CC := cc
CFLAGS := -Wall -Wextra -Werror -MMD -MP -I $(HEADERS)
RM := rm -f

SRCS := $(SRC)/main.c

NAME := cub3D
OBJS := $(SRCS:.c=.o)
DEP := $(OBJS:.o=.d)

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $@

$(SRC)/%.o : $(SRC)/%.c
		$(CC) $(CFLAGS) -c $< -o $@

-include $(DEP)

clean:
		$(RM) $(OBJS) $(DEP)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
