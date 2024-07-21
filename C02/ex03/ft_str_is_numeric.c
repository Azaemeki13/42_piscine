/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:18:05 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/17 17:01:25 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	n;
	int	i;

	i = 0;
	n = 5;
	if (str == NULL || *str == '\0')
	{
		n = 1;
		return (n);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
int 	n;
n = ft_str_is_numeric(NULL);
printf("%d", n);
return(0);
}
*/
