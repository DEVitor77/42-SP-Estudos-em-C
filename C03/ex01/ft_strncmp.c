/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:58:24 by vvitor-d          #+#    #+#             */
/*   Updated: 2023/03/22 18:00:07 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while ((s1[c] != '\0' || s2[c] != '\0') && (c < n))
	{
		if (s1[c] != s2[c])
			return (s1[c] - s2[c]);
		c++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char *s1;
// 	char *s2;
// 	char *s3;

// 	s1 = "The Used";
// 	s2 = "croods";
// 	s3 = "The sed";
// 	printf("%d\n", ft_strncmp(s1, s2, 3));
// 	printf("%d\n", strncmp(s1, s2, 3));
// 	printf("%d\n", ft_strncmp(s1, s3, 3));
// 	printf("%d\n", strncmp(s1, s3, 3));
// 	printf("%d\n", ft_strncmp(s2, s3, 8));
// }