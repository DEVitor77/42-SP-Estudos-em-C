/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:51:01 by rseelaen          #+#    #+#             */
/*   Updated: 2023/03/09 13:16:35 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	buf_a;

	buf_a = *a;
	*a = *b;
	*b = buf_a;
}

int    main(void)
{
    int    a = 2;
    int    b = 4;

    ft_swap(&a, &b);
    printf("a = 4 = %d\n", a);
    printf("b = 2 = %d\n", b);
}
