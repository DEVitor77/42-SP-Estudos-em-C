/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:36:34 by josupere          #+#    #+#             */
/*   Updated: 2023/03/21 17:55:31 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("\"123\": %i\n", ft_str_is_numeric("123"));
	printf("\"\": %i\n", ft_str_is_numeric(""));
	printf("\"1234567a89\": %i\n", ft_str_is_numeric("1234567a89"));
}