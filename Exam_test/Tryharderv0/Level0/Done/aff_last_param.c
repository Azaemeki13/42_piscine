/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:12:50 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/25 16:24:29 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        write (1, "\n", 1);
    }
    else 
    {
        while (*argv[argc-1])
        {
            write(1, argv[argc-1], 1);
            argv[argc-1]++;
        }
        write(1, "\n", 1);
    }
    return 0;
}
