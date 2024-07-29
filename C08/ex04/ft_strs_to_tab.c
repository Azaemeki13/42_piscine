/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:32:43 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/29 18:18:37 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int	strcount(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

t_stock_str	set_it_all(char *str)
{
	t_stock_str	element;
	int			i;

	i = 0;
	element.size = strcount(str);
	element.str = str;
	element.copy = malloc(element.size + 1);
	if (element.copy == NULL)
	{
		element.size = 0;
		element.str = NULL;
		element.copy = NULL;
		return (element);
	}
	else
	{
		while (i < element.size)
		{
			element.copy[i] = str[i];
			i++;
		}
		element.copy[i] = '\0';
	}
	return (element);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*final_array;

	i = 0;
	final_array = malloc(sizeof(t_stock_str) * (ac + 1));
	if (final_array == NULL)
		return (NULL);
	while (i < ac)
	{
		final_array[i] = set_it_all(av[i]);
		i++;
	}
	final_array[i].size = 0;
	final_array[i].str = NULL;
	final_array[i].copy = NULL;
	return (final_array);
}
