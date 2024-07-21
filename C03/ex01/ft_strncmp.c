/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 09:20:19 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/21 20:19:08 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	isnull(char *str1, char *str2)
{
	if ((str1 == NULL) || (str2 == NULL))
		return (1);
	return (0);
}

int	char_comp(char s1, char s2)
{
	if (s1 == s2)
		return (0);
	if (s1 < s2)
		return (-1);
	if (s1 > s2)
		return (1);
	return (404);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				result;
	unsigned int	i;

	i = 0;
	if (isnull(s1, s2))
		return (0);
	while (i <= n && *s1 && *s2)
	{
		result = char_comp(*s1, *s2);
		if (result != 0)
			return (result);
		s1++;
		s2++;
		i++;
	}
	if (i == n)
		return (0);
	else
		return (char_comp(*s1, *s2));
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "Hellow";
	str2 = "Hello";
	printf(" Now as thou can see the comparaison be\
	tween them is like %d", ft_strncmp(str1, str2, 6));
	return (0);
}
*/
