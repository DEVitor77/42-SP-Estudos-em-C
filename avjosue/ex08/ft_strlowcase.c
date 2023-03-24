/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 08:50:44 by josupere          #+#    #+#             */
/*   Updated: 2023/03/21 18:01:14 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 'A' && str[c] <= 'Z'))
			str[c] = str[c] + 32;
		c++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char mystr[] = "Vitor FiLho";
	printf("%s", ft_strlowcase(mystr));
}