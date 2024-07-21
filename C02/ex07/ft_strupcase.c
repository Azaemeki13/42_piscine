/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:25:20 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/17 17:54:07 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*buffer;

	buffer = str;
	if (buffer == NULL)
	{
		return (NULL);
	}
	while (*buffer)
	{
		if (*buffer >= 'a' && *buffer <= 'z')
		{
			*buffer -= 32;
		}
		buffer++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "holA amig0 !";

	ft_strupcase(str);
	printf("%s", str);
}
*/
