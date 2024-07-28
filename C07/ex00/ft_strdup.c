/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:06:54 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/28 13:00:57 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	str_mlen(char *src)
{
	int	i;

	i = 0;
	while (*src++)
	{
		i++;
	}
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*base;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * str_mlen(src));
	base = dest;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (base);
}
/*
int	main(void)
{
	char	*base;

	printf("%s", ft_strdup("hey there"));
}
*/
