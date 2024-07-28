/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:00:11 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/27 13:04:35 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	strcount(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int	countall(int size, char **strs, char *sep)
{
	int	index;
	int	total_length;

	index = 0;
	total_length = 0;
	if (size == 0)
		return (0);
	while (index < size)
	{
		total_length += strcount(strs[index]);
		index++;
	}
	total_length += strcount(sep) * size - 1;
	return (total_length);
}

char	*nav_them_all(char *nav, char *ptr_nav)
{
	while (*ptr_nav != '\0')
	{
		*nav = *ptr_nav;
		nav++;
		ptr_nav++;
	}
	return (nav);
}

char	*sep_them_all(char *nav, char *ptr_sep)
{
	while (*ptr_sep != '\0')
	{
		*nav = *ptr_sep;
		nav++;
		ptr_sep++;
	}
	return (nav);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		index;
	char	*nav;
	char	*ptr_nav;
	char	*ptr_sep;
	char	*finish_str;

	index = countall(size, strs, sep);
	finish_str = malloc(sizeof(char) * (index + 1));
	index = 0;
	nav = finish_str;
	while (index < size)
	{
		ptr_nav = strs[index];
		ptr_sep = sep;
		nav = nav_them_all(nav, ptr_nav);
		if (index < size - 1)
			nav = sep_them_all(nav, ptr_sep);
		index++;
	}
	*nav = '\0';
	return (finish_str);
}
/*
int	main(void)
{
	char	*strs[] = {"Hello", "world","is", "a", "test"};
	char	*sep;
	char	*result;

	// Define some test strings and separators
	sep = " ";
	// Join the strings with the separator
	result = ft_strjoin(6, strs, sep);
	// Print the result
	if (result)
	{
		printf("Joined string: %s\n", result);
		free(result); // Don't forget to free the allocated memory
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return (0);
}
*/
