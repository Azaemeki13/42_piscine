# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/28 16:30:53 by cauffret          #+#    #+#              #
#    Updated: 2024/07/29 10:47:17 by cauffret         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS= -Werror -Wall -Wextra -I$(HEADER_DIR)
SRC_DIR = srcs
HEADER_DIR = includes

SOURCES = $(SRC_DIR)/ft_putchar.c $(SRC_DIR)/ft_swap.c $(SRC_DIR)/ft_putstr.c $(SRC_DIR)/ft_strlen.c $(SRC_DIR)/ft_strcmp.c
OBJECTS = $(SOURCES:.c=.o)

TARGET = libft.a

all: $(TARGET)

$(TARGET): $(OBJECTS)
	ar rcs $@ $^
# compiling instructions 
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJECTS)

fclean: clean 
	rm -rf $(TARGET)

re: fclean all

.PHONY: all clean fclean re 
