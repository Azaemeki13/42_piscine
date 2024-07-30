/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 08:11:07 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/30 16:42:54 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// #include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}
/*
void	print_int(int n)
{
	printf("%d\n", n);
}
*/
/*
int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	length;

	length = sizeof(tab) / sizeof(tab[0]);
	ft_foreach(tab, length, print_int);
	return (0);
}
*/
