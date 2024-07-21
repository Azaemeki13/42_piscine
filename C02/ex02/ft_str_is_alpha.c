/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:07:47 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/17 16:57:32 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (str == NULL || *str == '\0')
	{
		n = 1;
		return (n);
	}
	while (str[i] != '\0')
	{
		if ((str[i] | 32) >= 'a' && (str[i] | 32) <= 'z')
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
	int	n;

	n = ft_str_is_alpha(NULL);
	printf("%d", n);
}
*/
