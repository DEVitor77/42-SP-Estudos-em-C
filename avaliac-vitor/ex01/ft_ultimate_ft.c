/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:53:09 by vvitor-d          #+#    #+#             */
/*   Updated: 2023/03/18 14:35:31 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <stdio.h>

int	main(void)
{
	int	a;
	int	*ptra1;
	int	**ptra2;
	int	***ptra3;
	int	****ptra4;
	int	*****ptra5;
	int	******ptra6;
	int	*******ptra7;
	int	********ptra8;
	int	*********ptra9;

	a = 567;
	ptra1 = &a;
	ptra2 = &ptra1;
	ptra3 = &ptra2;
	ptra4 = &ptra3;
	ptra5 = &ptra4;
	ptra6 = &ptra5;
	ptra7 = &ptra6;
	ptra8 = &ptra7;
	ptra9 = &ptra8;
	ft_ultimate_ft(ptra9);
	printf("%d\n", a);
	a = 234;
	printf("%d\n", a);
	ft_ultimate_ft(ptra9);
	printf("%d", a);
}
