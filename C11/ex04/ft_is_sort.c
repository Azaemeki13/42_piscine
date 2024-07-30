/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:20:34 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/30 16:43:25 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	icompare(int a, int b)
{
	if (a < b)
		return (-1);
	if (a > b)
		return (1);
	return (0);
}

int	okok(int *tab, int length, int (*f)(int, int))
{
	int	ascending;
	int	descending;
	int	i;

	ascending = 1;
	descending = 1;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
		{
			ascending = 0;
		}
		if (f(tab[i], tab[i + 1]) < 0)
		{
			descending = 0;
		}
		i++;
	}
	if (ascending || descending)
		return (1);
	else
		return (0);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	if (tab == NULL)
		return (0);
	result = okok(tab, length, f);
	return (result);
}
