/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 08:59:15 by vvitor-d          #+#    #+#             */
/*   Updated: 2023/03/17 17:10:49 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;
	int	tempb;

	tempa = *a / *b;
	tempb = *a % *b;
	*a = tempa;
	*b = tempb;
}
/*#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 123;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d\n", a, b);
	a = -123;
	b = 15;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d\n", a, b);
}
*/