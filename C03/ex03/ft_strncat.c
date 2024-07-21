/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:08:41 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/21 20:19:20 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*start;
	unsigned int	i;

	i = 0;
	start = dest;
	while (*dest)
		dest++;
	while (i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	return (start);
}
/*
int	main(void)
{
	char	dest[] = "Hello";
	char	src[] = "wy";

	printf("%s", ft_strncat(dest, src, 1));
}
*/
