/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:39:26 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/17 17:09:05 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	if (str == NULL || *str == '\0')
	{
		n = 1;
		return (n);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			n = 1;
		}
		else
		{
			n = 0;
			break ;
		}
		i++;
	}
	return (n);
}
/*
int	main(void)
{
	int n;
	n = ft_str_is_uppercase(NULL);
	printf("%d", n);
	return(15);
}
*/
