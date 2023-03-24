/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:27:29 by izanoni           #+#    #+#             */
/*   Updated: 2023/03/22 14:51:38 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
#include <stdio.h>

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	int		cmp1;
	int		cmp2;

	str1 = "vamos";
	str2 = "bora";
	str3 = "vamos";
	cmp1 = ft_strcmp(str1, str2);
	cmp2 = ft_strcmp(str1, str3);
	printf("0: s1=s2, -: s1<s2, +: s1>s2\n	%d\n", cmp1);
	printf("0: s1=s2, -: s1<s2, +: s1>s2\n	%d\n", cmp2);
	return (0);
}
