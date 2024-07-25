/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   concat_all.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 09:53:57 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/25 10:13:50 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *nav_them_all(char *nav, char *ptr_nav)
{
    while (*ptr_nav != '\0')
    {
        *nav = *ptr_nav; 
        nav++;
        ptr_nav++;
    }
    return (nav);   
}

char    *sep_them_all(char *nav, char *ptr_sep)
{
    while (*ptr_sep != '\0')
    {
        *nav = *ptr_sep;
        nav++;
        ptr_sep++;
    }
    return (nav);
}