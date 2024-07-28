# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cauffret <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/28 15:20:54 by cauffret          #+#    #+#              #
#    Updated: 2024/07/28 15:57:13 by cauffret         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

SRC_DIR="."
OUTPUT="libft.a"

CFILES=$(find $SRC_DIR -name '*.c')

if [ -z "$CFILES" ]; then
	echo "No C files found in the directory."
	exit 1
fi


for FILE in $CFILES; do
	gcc -c $FILE -o ${FILE%.c}.o
done

OFILES=$(find $SRC_DIR -name '*.o')

if [ -z "$OFILES" ]; then
	echo "No object files found, compilation may have failed."
	exit 1
fi

ar rcs $OUTPUT $OFILES

if [ $? -eq 0 ]; then
    echo "Library created successfully: $OUTPUT"
else
    echo "Failed to create library."
fi
