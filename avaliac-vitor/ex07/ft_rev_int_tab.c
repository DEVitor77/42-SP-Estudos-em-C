/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:28:38 by vvitor-d          #+#    #+#             */
/*   Updated: 2023/03/18 14:51:47 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		temp = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = temp;
		i++;
		if (i >= size - 1 - i)
		{
			break ;
		}
	}
}
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	print_array(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
		printf("%d ", arr[i++]);
	printf("\n");
}

int	main(void)
{
	int empty[0];
	int test_even[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int test_odd[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

	ft_rev_int_tab(empty, 0);
	ft_rev_int_tab(test_even, 10);
	ft_rev_int_tab(test_odd, 11);
	print_array(empty, 0);
	print_array(test_even, 10);
	print_array(test_odd, 11);
}