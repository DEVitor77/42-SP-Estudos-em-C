/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:45:29 by omartins          #+#    #+#             */
/*   Updated: 2023/03/23 17:54:48 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	indx;

	indx = 0;
	while (str[indx] != '\0')
	{
		write(1, &str[indx++], 1);
	}
}
#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	ft_putstr("hello");
	write(1, "\n", 1);
	ft_putstr("holla\noutro");
}