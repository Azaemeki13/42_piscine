/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:23:08 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/25 15:31:23 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    hello(char *str)
{
        while (*str)
        {
            write(1, str, 1);
            str++;
        }
        write(1, "\n", 1);
}

int     main(void)
{
hello("Hello World !");
return 1;
}