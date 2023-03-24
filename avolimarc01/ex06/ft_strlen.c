/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:31:42 by omartins          #+#    #+#             */
/*   Updated: 2023/03/23 17:55:37 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	indx;

	indx = 0;
	while (str[indx] != '\0')
	{
		indx++;
	}
	return (indx);
}
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	printf("%d %d", ft_strlen("hel\nlo"), ft_strlen(""));
}
