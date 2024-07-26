/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 09:35:35 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/26 10:47:35 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    convert0(char c)
{
    if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
    {
        c += 13;
        return c;
    }
        
    if ((c <= 'z' && c >= 'n') || (c <= 'Z' && c >= 'N'))
    {
        c -= 13;
        return c;
    }
    else 
        return c;
}

int     main(int argc, char **argv)
{
    int i = 0; 
    
    if (argc == 2)
    {
        while (argv[1][i])
        {
            argv[1][i] = convert0(argv[1][i]);
            write (1, &argv[1][i], 1);
            i++;
        }
        write (1, "\n", 1);
    }
    else 
        write (1, "\n", 1);
}
