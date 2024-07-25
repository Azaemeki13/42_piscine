/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcount.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 09:42:50 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/25 09:53:39 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     strcount(char *str)
{
    int i;

    i = 0;
    while (*str)
    {
        i++;
        str++;
    }
    return (i);
}

int     countall(int size, char **strs, char *sep)
{
    int index;
    int total_length;

    index = 0;
    total_length = 0;
    if (size == 0)
        return(0);
     while (index < size)
    {
        total_length += strcount(strs[index]);
        index++;
    }
    total_length += strcount(sep) * size - 1; 
    return (total_length);
}