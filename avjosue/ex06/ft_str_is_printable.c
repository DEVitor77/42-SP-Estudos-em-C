/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:22:50 by josupere          #+#    #+#             */
/*   Updated: 2023/03/21 17:57:54 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] > 31 && str[c] != 127)
			c++;
		else
			return (0);
	}
	return (1);
}
#include <ctype.h>
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	int c;
	int i = 0;
	char str[150];

	for (c = 1; c <= 127; ++c)
		if (isprint(c) != 0)
			str[i++] = c;

	printf("\"\": %i\n", ft_str_is_printable(""));
	printf("\"%s\": %i\n", str, ft_str_is_printable(str));
	printf("with a tab: %i\n", ft_str_is_printable("fs\ts"));

	str[0] = 31;
	str[10] = '\0';
	printf("With the character just before: %i\n", ft_str_is_printable(str));

	str[0] = 127;
	str[10] = '\0';
	printf("With the character just after: %i\n", ft_str_is_printable(str));
}