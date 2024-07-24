/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:27:38 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/24 18:33:45 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_counstr(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_length;
	int		index;
	char	*final;
	char	*nav;
	char	*sgl_ptr;
	char	*sep_ptr;

	total_length = 0;
	index = 0;
	while (index < size)
	{
		total_length += ft_counstr(strs[index]);
        if ( index < size -1)
            total_length += ft_counstr(sep);
        index++;
	}
	final = (char *)malloc(sizeof(char) * total_length + 1);
	if (final == NULL)
		return (NULL);
	nav = final;
	index = 0;
	while (index < size)
	{
		sgl_ptr = strs[index];
		while (*sgl_ptr)
		{
			*nav = *sgl_ptr;
			nav++;
			sgl_ptr++;
		}
		if (index < size - 1)
		{
			sep_ptr = sep;
			while (*sep_ptr)
			{
				*nav = *sep_ptr;
				nav++;
				sep_ptr++;
			}
		}
		index++;
	}
	*nav = '\0';
	return (final);
}
/*
int	main(void)
{
	char	*strs[] = {"fucking", "exercise", "I hate you", "nah for real"};
	char	*sep;
	char	*result;

	sep = " ";
	result = ft_strjoin(4, strs, sep);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	else
		printf("SYKE");
	return (0);
}
*/