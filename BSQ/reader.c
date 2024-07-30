/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:53:21 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/30 18:11:47 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "requirements.h"

struct  s_output myman(char *filename)
{
    fo = open(filename, O_RDONLY);
    if (fo < 0)
    write (1, "Error when opening file", 24);
    exit(filename);
}
FILE *fptr;
