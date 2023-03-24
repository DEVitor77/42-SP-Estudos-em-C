/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 20:30:43 by omartins          #+#    #+#             */
/*   Updated: 2023/03/23 17:51:33 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	int	a;

	a = 42;
	*nbr = a;
}
#include <stdio.h>

void	ft_ft(int *ptr);

int	main(void)
{
	int	a;

	a = 567;
	ft_ft(&a);
	printf("%d\n", a);
	a = 234;
	printf("%d\n", a);
	ft_ft(&a);
	printf("%d", a);
}
