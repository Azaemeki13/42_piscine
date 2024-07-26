/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 08:19:49 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/26 08:42:49 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int repeat(char c)
{
    int i = 0;
    if (c >= 'A' && c <= 'Z' )
    {
        c = c - 'A' + 1; 
        return c;
    }
    if (c >= 'a' && c <= 'z' )
    {
        c = c - 'a' + 1; 
        return c;
    }
    else 
    return 1;
}

int main (int argc, char **argv)
{
    int i = 0;
    int n = 0;
    char c;
    
    if (argc != 2)
        write(1,"\n", 1);
    else 
    {
        while (argv[1][i])
        {
            n = repeat(argv[1][i]);
            while (n > 0)
            {
                write (1, &argv[1][i], 1);
                n--;
            }
            i++;
        }
    }
    return 0;
}