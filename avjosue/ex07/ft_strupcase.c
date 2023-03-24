/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:27:26 by josupere          #+#    #+#             */
/*   Updated: 2023/03/21 17:59:01 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] = str[c] - 32;
		}
		c++;
	}
	return (str);
}
#include <ctype.h>
#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char str[100] = "abcd-fsdAfddsSS";
	char cpy[100];
	char *ret;
	strcpy(cpy, str);

	printf("\"%s\": %s\n", str, ft_strupcase(cpy));

	ret = ft_strupcase(cpy);
	printf("Same string returned? %i\n", ret == cpy);
}