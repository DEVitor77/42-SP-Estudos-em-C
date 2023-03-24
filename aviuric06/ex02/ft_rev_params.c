/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iusantos <iusantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 09:29:14 by iusantos          #+#    #+#             */
/*   Updated: 2023/03/23 14:47:36 by iusantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	param_counter;

	param_counter = argc - 1;
	while (param_counter > 0)
	{
		while (*argv[param_counter] != '\0')
		{
			ft_putchar(*argv[param_counter]);
			argv[param_counter]++;
		}
		ft_putchar('\n');
		param_counter--;
	}
}
