/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:06:54 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/23 11:24:37 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
    char    *dest;
    char    *base;
    int i;

    i = 0;
    dest = (char*) malloc(sizeof(*src)*1);
    base = dest;
    while (src[i] != 0)
    {
        dest[i] = src[i]; 
        i++;
    }    
    dest[i] = '\0';
    return (base);
}
/*
int main(void)
{
    char *base;
    printf("%s", ft_strdup("hey there"));
}
*/