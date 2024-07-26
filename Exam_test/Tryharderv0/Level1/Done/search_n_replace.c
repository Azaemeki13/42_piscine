/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_n_replace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 08:45:21 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/26 09:14:17 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int     checker(char *str, char a)
{
    while(*str)
    {
        if (*str == a)
            return 1;
        str++;
    }
    return 0;
}

int     main(int argc, char **argv)
{

    int i = 0;
    if (argc != 4)
    {
        write (1, "\n", 1);
    }
    else 
    {
        if (!checker(argv[1], argv[2][0]))
        {
            while (argv[1][i] != '\0')
            {
                write(1, &argv[1][i],1);
                i++;
            }
            write (1, "\n", 1);
            return 0;
        }
        if (argv[2][1] != '\0' && argv[3][1] != '\0')
        {
            write (1, "\n", 1);
            return 0;
        }
        else 
        {
            while (argv[1][i] != '\0')
            {
                if (argv[1][i] == argv[2][0])
                    argv[1][i] = argv[3][0];
                write (1, &argv[1][i], 1);
                i++;
            }
        }
    }
    return 0;
}
