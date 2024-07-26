/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 09:15:12 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/26 09:34:05 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int argc, char **argv)
{
    int i = 0;
    
    if (argc != 2)
        write (1, "\n", 1);
    else 
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                argv[1][i] += 32;
            }
            else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                argv[1][i] -= 32;
            }
            write (1, &argv[1][i], 1);
            i++;
        }
        write (1, "\n", 1);
    }
    return 0;
}
