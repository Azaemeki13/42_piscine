/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:05:54 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/21 20:21:29 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*whitespaces(char *str)
{
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
	{
		str++;
	}
	return (str);
}

char	*is_sign(char *str, int *sign)
{
	int	counter;

	counter = 0;
	*sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			*sign = -*sign;
		str++;
	}
	return (str);
}

int	value(char *str)
{
	int	current;
	int	final;

	final = 0;
	while (*str >= '0' && *str <= '9')
	{
		current = *str - '0';
		final = final * 10 + current;
		str++;
		if (*str == '+' || *str == '-')
			return (final);
	}
	return (final);
}

int	ft_atoi(char *str)
{
	int	final;
	int	sign;

	str = whitespaces(str);
	str = is_sign(str, &sign);
	final = value(str);
	if (*str < '0' || *str > '9')
		return (final * sign);
	else
		return (final * sign);
}
/*
int	main(void)
{
	char	yikes[] = "   45-a+b--4567asdmnb789";

	printf(" %d", ft_atoi(yikes));
	return (0);
}
*/
