/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:39:49 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/27 13:04:20 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (i < (max - min))
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (i);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	i;

	min = 0;
	max = 7;
	i = ft_ultimate_range(&range, min,max);
	printf("%d", i);
	free(range);
	return (0);
}
*/
