/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:51:47 by hsouza-p          #+#    #+#             */
/*   Updated: 2023/03/23 16:48:48 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*str0;
	char	*str1;
	char	*str2;

	str0 = "";
	printf("std: %i, yours: %i\n", strcmp(str0, "a"), ft_strcmp(str0, "a"));
	str1 = (char *)"abcadef";
	str2 = (char *)"abcadef";
	printf("std: %i, yours: %i\n", strcmp(str1, str2), ft_strcmp(str1, str2));
	str1 = "abcadef";
	str2 = "abcad";
	printf("std: %i, yours: %i\n", strcmp(str1, str2), ft_strcmp(str1, str2));
	str1 = "abcad";
	str2 = "abcadtg";
	printf("std: %i, yours: %i\n", strcmp(str1, str2), ft_strcmp(str1, str2));
}
