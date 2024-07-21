/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 22:36:02 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/21 22:36:19 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
    int odd;
    int counter;

    odd = 1;
    while (nb != 0)
    {
            nb -= odd;
            odd += 2;
            counter++;
    }
    if (nb < 0)
        return (-1);
    else 
        return counter; 
}

int main(void)
{
    printf("%d", ft_sqrt(25));
}