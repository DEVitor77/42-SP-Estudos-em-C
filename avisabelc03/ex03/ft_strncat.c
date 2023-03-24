/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izanoni <izanoni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:21:05 by izanoni           #+#    #+#             */
/*   Updated: 2023/03/22 14:01:09 by izanoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len ++;
	return (len);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	c;

	i = ft_strlen(dest);
	c = 0;
	while (src[c] != '\0' && c < nb)
	{
		dest[i + c] = src[c];
			c++;
	}
	dest[i + c] = '\0';
	return (dest);
}
#include <stdio.h>

int	main(void)
{
	char	dest[21] = "vamos ";
	char	src[] = "la cadetes";
	unsigned int	nb = 2;

	ft_strncat(dest, src, nb);
	printf("dest + %d de src: %s\n", nb, dest);
}
