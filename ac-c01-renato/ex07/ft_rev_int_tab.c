/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:41:57 by rseelaen          #+#    #+#             */
/*   Updated: 2023/03/09 13:26:25 by vvitor-d         ###   ########.fr       */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int		counter;

	counter = 0;
	while (counter <= size / 2)
	{
		ft_swap(&tab[counter], &tab[size - 1]);
		counter++;
		size--;
	}
}

int    main(void)
{
    int    tab1[] = { 2, 3, 5, 7, 11, 13, 17 };
    int    tab1_size = sizeof(tab1) / sizeof(tab1[0]);
    ft_rev_int_tab(tab1, tab1_size);
    printf("expected: 17 13 11 7 5 3 2  result:");
    for (int i = 0; i < tab1_size; ++i)
        printf(" %d", tab1[i]);
    printf("\n");
    int    tab2[] = { 1, 2, 3, 4, 5 };
    int    tab2_size = sizeof(tab2) / sizeof(tab2[0]);
    ft_rev_int_tab(tab2, tab2_size);
    printf("expected: 5 4 3 2 1         result:");
    for (int i = 0; i < tab2_size; ++i)
        printf(" %d", tab2[i]);
    printf("\n");
    int    tab3[] = { 1, 2 };
    int    tab3_size = sizeof(tab3) / sizeof(tab3[0]);
    ft_rev_int_tab(tab3, tab3_size);
    printf("expected: 2 1               result:");
    for (int i = 0; i < tab3_size; ++i)
        printf(" %d", tab3[i]);
    printf("\n");
    int    tab4[] = { 1 };
    int    tab4_size = sizeof(tab4) / sizeof(tab4[0]);
    ft_rev_int_tab(tab4, tab4_size);
    printf("expected: 1                 result:");
    for (int i = 0; i < tab4_size; ++i)
        printf(" %d", tab4[i]);
    printf("\n");
    return (0);
}
