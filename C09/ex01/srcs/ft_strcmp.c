/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:02:58 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/17 09:18:08 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	isnull(char *str1, char *str2)
{
	if ((str1 == NULL) || (str2 == NULL))
	{
		return (1);
	}
	return (0);
}

int	char_return(char s1, char s2)
{
	if (s1 == s2)
		return (0);
	if (s1 < s2)
		return (-1);
	if (s1 > s2)
		return (1);
	return (2);
}

int	prefix_check(char *s1, char *s2)
{
	if (*s1)
		return (1);
	if (*s2)
		return (-1);
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	result;

	if (isnull(s1, s2))
		return (-1);
	while (*s1 && *s2)
	{
		result = char_return(*s1, *s2);
		if (result != 0)
			return (result);
		s1++;
		s2++;
	}
	return (prefix_check(s1, s2));
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	str1 = "Hello";
	str2 = "Hellooo";
	str3 = "World";
	str4 = NULL;
	printf(" Our result for str1 VS str2 is : %d \n", ft_strcmp(str1, str2));
	printf(" Our result for str1 VS str3 is : %d \n", ft_strcmp(str1, str3));
	printf(" Our result for str2 VS str4 is : %d \n", ft_strcmp(str3, str2));
}
*/
