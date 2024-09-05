/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_str_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 21:09:00 by efranco           #+#    #+#             */
/*   Updated: 2024/09/01 23:33:31 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

void	put_letters(char c, int flag)
{
	if (c >= 'a' && c <= 'z')
		ft_putchar(c);
	if (c == '\n')
	{
		if (flag == 1)
			ft_putchar(' ');
		return ;
	}
}

void	print_str(char *str, char *arg, int flag)
{
	int	i;
	int	j;

	i = 0;
	while (str[i++])
	{
		j = 0;
		while (str[i + j] == arg[j])
		{
			if (arg[j + 1] == '\0')
			{
				while (str[i++] != '\n')
				{
					put_letters(str[i], flag);
				}
			}
			j++;
		}
	}
}

void	print_char(char *str, char arg, int flag)
{
	int	i;
	int	j;

	i = 0;
	while (str[i++])
	{
		j = 0;
		while (str[i + j] == arg)
		{
			while (str[i++] != '\n')
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					ft_putchar(str[i]);
				if (str[i] == '\n')
				{
					if (flag == 1)
						ft_putchar(' ');
					return ;
				}
			}
			j++;
		}
	}
}
