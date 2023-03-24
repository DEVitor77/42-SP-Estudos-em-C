/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 08:58:38 by vvitor-d          #+#    #+#             */
/*   Updated: 2023/03/17 17:00:57 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 123;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d %d %d\n", a, b, div, mod);
	a = -123;
	b = 15;
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d %d %d\n", a, b, div, mod);
}*/