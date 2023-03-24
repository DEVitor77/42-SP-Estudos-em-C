/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:19:24 by rseelaen          #+#    #+#             */
/*   Updated: 2023/03/09 13:20:08 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int		x;
	int		y;

	x = *a / *b;
	y = *a % *b;
	*a = x;
	*b = y;
}


int    main(void)
{
    int div, mod;

    div = 123;
    mod = 42;
    ft_ultimate_div_mod(&div, &mod);

    printf("expected: 2,  result: %d\n", div);
    printf("expected: 39, result: %d\n", mod);

    div = 42;
    mod = 42;
    ft_ultimate_div_mod(&div, &mod);

    printf("expected: 1,  result: %d\n", div);
    printf("expected: 0,  result: %d\n", mod);
    return (0);
}
