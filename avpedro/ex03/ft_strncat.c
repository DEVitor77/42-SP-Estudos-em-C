/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:43:50 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/03/20 19:05:13 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int n);

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
	int n = 0;

	s2 = "xyz";
	reset_strs(std_s1, s1, "aaaa");
	char *res = ft_strncat(s1, s2, n);
	char *std_res = strncat(std_s1, s2, n);
	printf("n: %i, same string: yours: '%s', std: '%s', %i\n", n, res, std_res,
			same_str(std_s1, s1, 10));

	n = 2;
	s2 = "xyz";
	reset_strs(std_s1, s1, "aaaa");
	res = ft_strncat(s1, s2, n);
	std_res = strncat(std_s1, s2, n);
	printf("n: %i, same string: yours: '%s', std: '%s', %i\n", n, res, std_res,
			same_str(std_s1, s1, 10));

	n = 3;
	s2 = "xyz";
	reset_strs(std_s1, s1, "aaaa");
	res = ft_strncat(s1, s2, n);
	std_res = strncat(std_s1, s2, n);
	printf("n: %i, same string: yours: '%s', std: '%s', %i\n", n, res, std_res,
			same_str(std_s1, s1, 10));

	n = 4;
	s2 = "xyz";
	reset_strs(std_s1, s1, "aaaa");
	res = ft_strncat(s1, s2, n);
	std_res = strncat(std_s1, s2, n);
	printf("n: %i, same string: yours: '%s', std: '%s', %i\n", n, res, std_res,
			same_str(std_s1, s1, 10));

	n = 5;
	s2 = "xyz";
	reset_strs(std_s1, s1, "aaaa");
	res = ft_strncat(s1, s2, n);
	std_res = strncat(std_s1, s2, n);
	printf("n: %i, same string: yours: '%s', std: '%s', %i\n", n, res, std_res,
			same_str(std_s1, s1, 10));
}