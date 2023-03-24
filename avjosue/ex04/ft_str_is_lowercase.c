/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 15:42:08 by josupere          #+#    #+#             */
/*   Updated: 2023/03/21 17:56:16 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		if (str[size] >= 'a' && str[size] <= 'z')
			size++;
		else
			return (0);
	}
	return (1);
}
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("\"abz\": %i\n", ft_str_is_lowercase("abz"));
	printf("\"ab{\": %i\n", ft_str_is_lowercase("ab{"));
	printf("\"ab`\": %i\n", ft_str_is_lowercase("ab`"));
	printf("\"\": %i\n", ft_str_is_lowercase(""));
	printf("\"asdasda..\": %i\n", ft_str_is_lowercase("asdasda.."));
	printf("\"asdasAa\": %i\n", ft_str_is_lowercase("asdasAa"));
}
