/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:00:15 by vvitor-d          #+#    #+#             */
/*   Updated: 2023/03/18 14:59:09 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	printf("%d %d", ft_strlen("hel\nlo"), ft_strlen("teste"));
}
