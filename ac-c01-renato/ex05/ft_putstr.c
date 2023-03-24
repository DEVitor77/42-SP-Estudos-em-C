/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvitor-d <vvitor-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:35:49 by rseelaen          #+#    #+#             */
/*   Updated: 2023/03/09 13:20:59 by vvitor-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		if (*str == '\0')
			break ;
		write(1, str, 1);
		str++;
	}
}
int    main(void)
{
    ft_putstr("O Leon é muito lindo\n");
}
