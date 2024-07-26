/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:54:21 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/25 16:10:12 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc < 2)
        write (1,"\n", 1);
    else
    {
         while (*argv[1])
         {
            write(1, argv[1],1 );
            argv[1]++;
         }
    }
    return 0;
}
