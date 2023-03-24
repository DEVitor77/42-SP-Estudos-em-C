/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izanoni <izanoni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:02:05 by izanoni           #+#    #+#             */
/*   Updated: 2023/03/22 14:00:09 by izanoni          ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	i = ft_strlen(dest);
	c = 0;
	while (src[c] != '\0')
	{
		dest[i + c] = src[c];
		c++;
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	dest[20] = "vamos ser";
	char	src[] = " cadetes";

	ft_strcat(dest, src);
	printf("%s\n", dest);
}
