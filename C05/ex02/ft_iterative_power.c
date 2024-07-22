/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 20:33:48 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/22 04:00:32 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	easy;

	easy = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		easy *= nb;
		power--;
	}
	return (easy);
}
/*
int	main(void)
{
	int	nb;
	int	power;

	nb = 5;
	power = 3;
	printf("%d", ft_iterative_power(nb, power));
}
*/