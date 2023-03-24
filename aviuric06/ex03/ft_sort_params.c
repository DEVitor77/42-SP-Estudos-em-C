/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iusantos <iusantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 09:38:00 by iusantos          #+#    #+#             */
/*   Updated: 2023/03/23 13:47:43 by iusantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_swap(char **a, char **b);
void	ft_print_params(int argc, char *argv[]);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	size;

	size = 0;
	while (s1[size] != '\0' && s1[size] == s2[size])
	{
		size++;
	}
	return (s1[size] - s2[size]);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_print_params(int argc, char *argv[])
{
	int	param_counter;

	param_counter = 1;
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

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	if (argc < 2)
	{
		return (0);
	}
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(&argv[i], &argv[j]);
			j++;
		}
		i++;
	}
	ft_print_params(argc, argv);
}
