/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:21:43 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/16 09:37:15 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
	{
		return (0);
	}
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}
/*
int	main()
{
	int count = ft_strlen("Hello");
	printf("%d", count);
}
*/
