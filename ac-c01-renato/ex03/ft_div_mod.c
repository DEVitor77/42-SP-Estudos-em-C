/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:56:57 by rseelaen          #+#    #+#             */
/*   Updated: 2023/03/09 13:18:24 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int    main(void)
{
    int div, mod;

    ft_div_mod(123, 42, &div, &mod);

    printf("expected: 2,  result: %d\n", div);
    printf("expected: 39, result: %d\n", mod);

    ft_div_mod(42, 42, &div, &mod);

    printf("expected: 1,  result: %d\n", div);
    printf("expected: 0,  result: %d\n", mod);
    return (0);
}
