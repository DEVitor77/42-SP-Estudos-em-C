/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:44:07 by parthur-          #+#    #+#             */
/*   Updated: 2023/03/23 18:44:17 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i2;
	int	i3;

	i = 0;
	i2 = 0;
	if (str[0] == '\0' || to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		i3 = i;
		while ((str[i3] == to_find[i2]) && to_find[i2] != '\0')
		{
			i3++;
			i2++;
		}
		if (to_find[i2] == '\0')
			return (&str[i]);
		i2 = 0;
		i++;
	}
	return (0);
}
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str[] = "012340123456789";
	char to_find[] = "456";

	printf("-----\nstr = %s\nto_find = %s\n", str, to_find);
	printf("%s\n", ft_strstr(str, to_find));

	return (0);
}