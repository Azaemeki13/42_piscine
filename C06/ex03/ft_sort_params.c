/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 01:31:28 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/27 12:49:55 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	char_return(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 < *s2)
			return (-1);
		else if (*s1 > *s2)
			return (1);
		s1++;
		s2++;
	}
	if (*s1)
		return (1);
	if (*s2)
		return (-1);
	return (0);
}

void	sort_strings(char **argv, int argc)
{
	int		i;
	int		pos;
	char	*temp;

	i = 0;
	while (i < argc - 1)
	{
		pos = 0;
		while (pos < argc - i - 1)
		{
			if (char_return(argv[pos], argv[pos + 1]) > 0)
			{
				temp = argv[pos];
				argv[pos] = argv[pos + 1];
				argv[pos + 1] = temp;
			}
			pos++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	i = 1;
	if (argc < 2)
	{
		write(1, "t'es fou frerow\n", 17);
		return (1);
	}
	sort_strings(argv + 1, argc - 1);
	while (i < argc)
	{
		str = argv[i];
		while (*str)
		{
			write(1, str, 1);
			str++;
		}
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
