/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:56:53 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/18 08:34:40 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
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
		if (str[i] >= 32 && str[i] < 127)
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
	n = ft_str_is_printable("");
	printf("%d", n);
	return(0);
}
*/
