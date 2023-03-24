/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 08:58:26 by vvitor-d          #+#    #+#             */
/*   Updated: 2023/03/17 16:51:23 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 13;
	b = 23;
	ft_swap(&a, &b);
	printf("%d %d\n", a, b);
	a = -23;
	b = 45;
	ft_swap(&a, &b);
	printf("%d %d\n", a, b);
}
*/