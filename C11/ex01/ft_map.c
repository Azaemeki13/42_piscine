/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 08:28:44 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/30 16:43:01 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*storage;
	int	i;

	i = 0;
	storage = (int *)malloc(sizeof(int) * length);
	if (storage == NULL)
		return (NULL);
	while (i < length)
	{
		storage[i] = (*f)(tab[i]);
		i++;
	}
	return (storage);
}
