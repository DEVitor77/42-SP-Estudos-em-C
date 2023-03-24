/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:33:44 by vvitor-d          #+#    #+#             */
/*   Updated: 2023/03/21 13:33:45 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str)
	{
		if (*str > 31 && *str < 127)
			str++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *mystr = "Devalter Vitor, 1989";
// 	char *mystr2 = "Devalter Vitor, 1989\n";
// 	char *mystr3 = "";
// 	printf("%d\n", ft_str_is_printable(mystr));
// 	printf("%d\n", ft_str_is_printable(mystr2));
// 	printf("%d\n", ft_str_is_printable(mystr3));
// }