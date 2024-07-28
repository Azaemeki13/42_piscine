/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:57:32 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/11 15:54:13 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> 

// defining the function
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* 
int	main(void)
{
	ft_putchar ('D');
	return (0);
}
*/
