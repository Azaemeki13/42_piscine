/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 08:57:35 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/16 09:43:21 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int main(void)
{
	int 	number_1;
	int	number_2;
	int swap;

	number_1 = 0;
	number_2 = 5;
	ft_swap(&number_1, &number_2);
	printf("%d, %d", number_1,number_2);
}
*/
