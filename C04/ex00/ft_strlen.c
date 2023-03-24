/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:16:45 by vvitor-d          #+#    #+#             */
/*   Updated: 2023/03/23 17:05:55 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	stringhunters;

	stringhunters = 0;
	while (*str != '\0')
	{
		stringhunters++;
		str++;
	}
	return (stringhunters);
}

// #include <stdio.h>

// int	ft_strlen(char *str);

// int	main(void)
// {
// 	char str[] = "DevitorPop";
// 	char *V_str;

// 	V_str = str;

// 	int hunter = ft_strlen(V_str);

// 	printf("%d\n", hunter);
// }