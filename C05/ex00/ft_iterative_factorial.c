/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:06:39 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/24 10:31:20 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	is_positive(int nb)
{
	int	a;

	a = 1;
	if (nb > 0)
	{
		return (a);
	}
	else
	{
		a = 0;
		return (a);
	}
}

int	ft_iterative_factorial(int nb)
{
	int	count;

	if (nb == 0)
		return (1);
	if (is_positive(nb))
	{
		count = nb - 1;
		while (count > 0)
		{
			nb *= count;
			count--;
		}
		return (nb);
	}
	if (!is_positive(nb))
	{
		count = nb + 1;
		while (count < 0)
		{
			nb *= count;
			count++;
		}
		return (nb);
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(-8));
}
*/
