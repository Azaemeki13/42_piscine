/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:22:41 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/23 18:38:41 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int *array;
    int i;

    i = 0;
    if (min >= max)
        {
            array = NULL;
            return (array);
        }
    array =(int*) malloc(sizeof(int) * (max-min));
    while (i < (max-min))
    {
        array[i] = i + min;
        i++;
    }
    return (array);
}
/*
int main(void)
{
    int *array;
    int min;
    int max;
    int i;

    min = 1;
    max = 9;
    i = 0; 
    array = ft_range(min,max);
    while ( i < (max-min))
    {
        printf("%d", array[i]);
        i++;
    }
    free(array);
    return (0);
}
*/