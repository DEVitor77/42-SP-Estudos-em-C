/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:48:12 by josupere          #+#    #+#             */
/*   Updated: 2023/03/21 17:57:14 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		if (str[size] >= 'A' && str[size] <= 'Z')
			size++;
		else
			return (0);
	}
	return (1);
}
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("\"ABZ\": %i\n", ft_str_is_uppercase("ABZ"));
	printf("\"AB@\": %i\n", ft_str_is_uppercase("AB@"));
	printf("\"AB[\": %i\n", ft_str_is_uppercase("AB["));
	printf("\"\": %i\n", ft_str_is_uppercase(""));
	printf("\"DASFJET..\": %i\n", ft_str_is_uppercase("ADASFJET.."));
}