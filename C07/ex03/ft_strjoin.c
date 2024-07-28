/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:00:11 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/28 18:01:44 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	strcount(char *str)
{
	long int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int	countall(int size, char **strs, char *sep)
{
	long int	index;
	long int	total_length;

	index = 0;
	total_length = 0;
	if (size == 0)
		return (0);
	while (index < size)
	{
		if (strs[index] == NULL)
			return (-1);
		total_length += strcount(strs[index]);
		index++;
	}
	if (sep == NULL)
		return (-1);
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
	long int	index;
	char		*nav;
	char		*ptr_nav;
	char		*ptr_sep;
	char		*finish_str;

	index = countall(size, strs, sep);
	if (index < 0)
		return (NULL);
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
	char	*strs[3] = {"Hello", NULL, "World"};
	char	*sep;
	char	*result;

	// Example with NULL pointers to cause segmentation fault
	sep = NULL;
	result = ft_strjoin(3, strs, sep);
	// Print result (if it somehow works without crashing, which it shouldn't)
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	return (0);
}
*/
