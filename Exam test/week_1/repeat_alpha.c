/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 08:37:41 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/19 09:15:31 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	count_letter(char d)
{
	int	repeat;

	if ( d >= 'A' && d <= 'Z')
		repeat = d -'A' + 1;
	if (d >= 'a' && d <= 'z')
		repeat = d - 'a' + 1;
	else 
		repeat = 1;
	return (repeat);
}

int main (int argc,char  **argv)
{
	int	repeat_count;

	if (argc == 2)
	{
		while (*argv[1])
		{
			repeat_count = count_letter(*argv[1]);
			while (repeat_count --)
			{
				ft_putchar(*argv[1]);
			}
			argv[1]++;
		}			
		ft_putchar('\n');
	}
	else 
		ft_putchar('\n');

}
