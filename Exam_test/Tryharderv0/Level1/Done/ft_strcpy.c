/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:15:11 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/25 17:37:38 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str,1);
        str++;
    }
}

char *ft_strcpy(char *dest, char *src)
{
    char *base;
    
    base = dest;
    while (*src)
    {
        *dest = *src;
        dest ++;
        src ++;
    }
    *dest ='\0';
    return base;
}
/*
int main (void)
{
    char ok[] = "oui bonjour monsieur";
    char ok2[25];
    char *base = ok;
    char *dest;
    dest = ok2;

    dest = ft_strcpy(dest, "oui bonjour monsieur");
    ft_putstr(dest); 
}
*/