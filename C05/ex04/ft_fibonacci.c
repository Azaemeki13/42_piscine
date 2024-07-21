/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:21:35 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/21 21:21:37 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
    {
        if (index < 0)
            return (-1);
        if (index == 0)
            return (0);
        else 
            return ft_fibonacci(index-1)+ ft_fibonacci(index-2);
    }
/*   
int main(void)
{
    printf("%d", ft_fibonacci(15));
}
*/