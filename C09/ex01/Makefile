# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/28 16:30:53 by cauffret          #+#    #+#              #
#    Updated: 2024/07/28 18:45:30 by cauffret         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS=-Werror -Wall -Wextra -I$(HEADER_DIR)
SOURCE=/srcs/*.c*
SRC_DIR = srcs
HEADER_DIR = includes

SOURCES = $(wildcard $(SRC_DIR)/*.c)
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

.PHONY: all clean fclean re norminette