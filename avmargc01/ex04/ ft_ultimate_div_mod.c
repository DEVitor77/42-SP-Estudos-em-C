/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_ultimate_div_mod.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbosa <mbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 20:26:22 by mbarbosa          #+#    #+#             */
/*   Updated: 2023/03/23 10:50:21 by mbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = temp_a / temp_b;
	*b = temp_a % temp_b;
}

#include <stdio.h>

int main(void)
{ 
		int		aa;
        int     bb;
        int     *a;
        int     *b;

        aa = 10;
        bb = 3;
        a = &aa;
        b = &bb;

    ft_ultimate_div_mod(&a, &b);
        printf("%d %d\n", a, b);
        return (0);
}