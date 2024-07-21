/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:26:30 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/18 08:33:18 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (str == NULL || *str == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			n = 1;
		}
		else
		{
			n = 0;
			return (n);
		}
		i++;
	}
	return (n);
}
/*
int	main(void)
{
	int	n;

	n =ft_str_is_lowercase(NULL);
	printf("%d", n);
	return(15);
}
*/
