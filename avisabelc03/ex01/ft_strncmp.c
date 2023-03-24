/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:27:32 by izanoni           #+#    #+#             */
/*   Updated: 2023/03/22 14:59:10 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && n > 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
		n--;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int	main(void)
{
	char			*str1;
	char			*str2;
	char			*str3;
	unsigned int	n;
	int				cmp1;
	int				cmp2;

	str1 = "vamos";
	str2 = "bora";
	str3 = "vamos";
	n = 4;
	cmp1 = ft_strncmp(str1, str2, n);
	cmp2 = ft_strncmp(str1, str3, n);
	printf("Os primeiros %d são:\n0: s1=s2, -: s1<s2, +: s1>s2\n	%d\n", n,
				cmp1);
	printf("Os primeiros %d são:\n0: s1=s2, -: s1<s2, +: s1>s2\n	%d\n", n,
				cmp2);
	return (0);
}
