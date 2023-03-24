/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:43:00 by josupere          #+#    #+#             */
/*   Updated: 2023/03/21 17:54:44 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a'
				&& str[i] <= 'z'))
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

int	ft_str_is_alpha(char *str);

int	main(void)
{
	printf("\"abc\": %i\n", ft_str_is_alpha("abc"));
	printf("\"\": %i\n", ft_str_is_alpha(""));
	printf("\"abcdasda1d\": %i\n", ft_str_is_alpha("abcdasda1d"));
}