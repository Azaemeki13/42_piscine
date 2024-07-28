/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauffret <cauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:53:34 by cauffret          #+#    #+#             */
/*   Updated: 2024/07/28 14:56:23 by cauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_point.h"

void set_point(t_point *point)
{
    point->x = 50;
    point->y = 21;
}
int main(void)
{
    t_point point;
    set_point(&point);
    printf("Point coordinates: x = %d, y = %d\n", point.x, point.y);
    return (0);
}
