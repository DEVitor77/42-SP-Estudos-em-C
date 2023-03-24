/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 09:05:58 by iusantos          #+#    #+#             */
/*   Updated: 2023/03/23 19:42:00 by vvitor-d         ###   ########.fr       */
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

	param_counter = 0;
	while (param_counter < argc)
	{
		while (*argv[param_counter] != '\0')
		{
			ft_putchar(*argv[param_counter]);
			argv[param_counter]++;
		}
		ft_putchar('\n');
		param_counter++;
	}
}
