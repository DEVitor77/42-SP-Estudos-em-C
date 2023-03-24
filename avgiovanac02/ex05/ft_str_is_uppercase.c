/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 23:36:31 by ghelena-          #+#    #+#             */
/*   Updated: 2023/03/20 20:48:35 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str)
	{
		if (*str > 64 && *str < 91)
			str++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	*mystr;
	char	*mystr2;
	char	*mystr3;

	mystr = "GIOVANNA";
	mystr2 = "Giovanna";
	mystr3 = "";
	printf("%d", ft_str_is_uppercase(mystr));
	printf("%d", ft_str_is_uppercase(mystr2));
	printf("%d", ft_str_is_uppercase(mystr3));
}
