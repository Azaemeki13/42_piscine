/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findy.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 10:31:00 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/19 11:05:43 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c)
{
	write(1, &c, 1);
}

void	ft_putstr (char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		char *str = argv[1];
		char target = argv[2][0];
		char replace = argv[3][0];
		int found = 0;

		char *temp_str = str;
		while (*temp_str)
		{
			if (*temp_str == target)
			{
				found = 1;
				break;
			}
		temp_str++;	
		}	
		if (found)
		{
			while (*str)
			{
				if (*str == target)
				{
					*str= replace;
				}
			ft_putchar(*str);
			str++;
			}
		}
		else 
		{
			ft_putstr(argv[1]);
			ft_putchar('\n');
		}
	}
	else 
	{
		ft_putchar('\n');
	}
	return (0);	
}
