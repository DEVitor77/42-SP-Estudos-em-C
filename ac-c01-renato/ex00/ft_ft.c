/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:38:12 by rseelaen          #+#    #+#             */
/*   Updated: 2023/03/09 13:04:19 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ft(int *nbr)
{
	int		a;

	a = 42;
	*nbr = a;
}

int    main(void)
{
    int number = 0;

    ft_ft(&number);
    printf("42 == %d", number);
}