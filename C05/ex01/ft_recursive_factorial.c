/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 19:35:53 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/19 19:45:10 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{	
	if (nb >=1)
	{
		return nb * ft_recursive_factorial(nb - 1);
	}
	else
		return (0);
}
/*
int	main(void)
{
	int nb = 6;
	printf("%d",ft_recursive_factorial(nb));
}
*/