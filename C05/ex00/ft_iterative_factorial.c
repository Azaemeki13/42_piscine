/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:06:39 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/24 10:42:27 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	count;

	if (nb > 0)
	{
		count = nb - 1;
		while (count > 0)
		{
			nb *= count;
			count--;
		}
		return (nb);
	}
	if (nb == 0)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(-5));
}
*/
