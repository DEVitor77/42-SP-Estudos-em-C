/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:43:06 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/03/20 19:02:48 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

void	set_str(char *src, char *dest)
{
	int	pos;

	pos = 0;
	while (src[pos] != '\0')
	{
		dest[pos] = src[pos];
		pos++;
	}
	dest[pos] = '\0';
}

bool	same_str(char *expected, char *output, int len)
{
	int		pos;
	int		res;
	char	e;
	char	o;

	res = 1;
	pos = 0;
	while (pos < len)
	{
		e = expected[pos];
		o = output[pos];
		if (e != o)
		{
			printf("in pos %d, expected: %d and got: %d\n",
					pos,
					e,
					o);
			res = 0;
		}
		pos++;
	}
	if (!res)
		printf("'%s' : '%s' \n", expected, output);
	return (res);
}

void	reset_strs(char *a, char *b, char *value)
{
	set_str(value, a);
	set_str(value, b);
}

int	main(void)
{
	char *s2 = "aaaaa";
	char s1[100] = "";
	char std_s1[100] = "";

	s2 = "xyz";
	reset_strs(std_s1, s1, "aaaa");
	char *res = ft_strcat(s1, s2);
	char *std_res = strcat(std_s1, s2);
	printf("same string: yours: '%s', std: '%s', %i\n", res, std_res,
			same_str(std_s1, s1, 10));

	s2 = "";
	reset_strs(std_s1, s1, "aaaa");
	res = ft_strcat(s1, s2);
	std_res = strcat(std_s1, s2);
	printf("same string: yours: '%s', std: '%s': %i\n", res, std_res,
			same_str(std_res, res, 10));
}