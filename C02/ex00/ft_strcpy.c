/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:19:55 by vvitor-d          #+#    #+#             */
/*   Updated: 2023/03/21 11:37:42 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char destino[20];
// 	char *origem;

// 	origem = "Don't stop me now\n";
// 	printf("%s", ft_strcpy(destino, origem));
// }