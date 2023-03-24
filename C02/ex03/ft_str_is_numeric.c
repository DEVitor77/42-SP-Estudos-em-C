/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:33:04 by vvitor-d          #+#    #+#             */
/*   Updated: 2023/03/21 13:33:05 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str)
	{
		if (*str > 47 && *str < 58)
			str++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*mystr;
// 	char	*mystr2;
// 	char	*mystr3;

// 	mystr = "1989";
// 	mystr2 = "I989";
// 	mystr3 = "";
// 	printf("%d", ft_str_is_numeric(mystr));
// 	printf("%d", ft_str_is_numeric(mystr2));
// 	printf("%d", ft_str_is_numeric(mystr3));
// }
