/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:50:41 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/29 19:24:26 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	newline(void)
{
	write(1, "\n", 1);
}

void	ft_putsize(int n)
{
	char	c;

	if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (n / 10 != 0)
	{
		ft_putsize(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	if (par == NULL)
		return ;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].str);
		newline();
		ft_putsize(par[i].size);
		newline();
		ft_putstr(par[i].copy);
		newline();
		i++;
	}
}
