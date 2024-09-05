/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 21:07:17 by efranco           #+#    #+#             */
/*   Updated: 2024/09/01 23:01:49 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

void	ft_parse_argument_power(char *dict, char *str, int length)
{
	int	i;
	int	index;
	int	space;

	i = 0;
	space = 1;
	index = ft_calculate_index(length);
	if (index != length)
	{
		while (i < (length - index))
		{
			ft_putchar(str[i]);
			i++;
		}
		if (length > 2)
			ft_create_to_find_powers(dict, &str[i - 1]);
	}
	while (i < length)
	{
		ft_putchar(str[i]);
		if (space % 3 == 0 && space < index - 1)
			ft_create_to_find_powers(dict, &str[i]);
		i++;
		space++;
	}
}

void	ft_write_tens(char *dict, char c, char d)
{
	char	*to_find;

	to_find = malloc(sizeof(char) + 3);
	if (c == '1')
	{
		to_find[0] = c;
		to_find[1] = d;
		to_find[2] = '\0';
		print_str(dict, to_find, 1);
	}
	else
	{
		to_find[0] = c;
		to_find[1] = '0';
		to_find[2] = '\0';
		print_str(dict, to_find, 1);
	}
	free(to_find);
}
//----------------------------------

void	ft_write_hundreds(char *dict, char c)
{
	print_char(dict, c, 1);
	print_str(dict, "100", 1);
}

int	ft_calculate_index(int length)
{
	int	index;

	index = length;
	while (index >= 0)
	{
		if (index % 3 == 0)
			return (index);
		index--;
	}
	return (index);
}

//-----------------------------------------------------------
int	ft_write_units(char *dict, char c, char d)
{
	if (d != 1)
	{
		print_char(dict, c, 1);
		return (1);
	}
	else
		return (0);
}
