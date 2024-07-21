/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:55:46 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/17 17:58:46 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	to_lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

int	str_is_null(char *base)
{
	if (base == NULL)
	{
		return (1);
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	char	*base;

	base = str;
	if (str_is_null(base))
	{
		return (NULL);
	}
	while (*base)
	{
		*base = to_lowercase (*base);
		base++;
	}
	return (str);
}
/*
int	main(void)
{
	char *str = NULL;
	ft_strlowcase(str);
	printf( "%s", str);
}
*/
