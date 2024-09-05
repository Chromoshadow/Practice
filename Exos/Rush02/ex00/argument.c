/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 21:01:51 by efranco           #+#    #+#             */
/*   Updated: 2024/09/01 23:32:56 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

void	ft_rush02(int argc, char **argv)
{
	char	*dict;
	int		length;

	if (argc < 2 || argc > 3)
		return ;
	if (argc == 2)
	{
		if (ft_check_number(argv[1]) == 0)
			return ;
	}
	if (argc == 3)
	{
		if (ft_check_number(argv[2]) == 0)
			return ;
		dict = ft_read_line(argv[1]);
		if (ft_check_dict(dict) == 0)
		{
			free(dict);
			return ;
		}
		length = ft_strlen(argv[2]);
		ft_parse_argument_power(dict, argv[2], length);
		ft_putchar('\n');
		free(dict);
	}
}

int	ft_check_number(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		if (!(argv[i] >= '0' && argv[i] <= '9'))
		{
			write(2, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_check_dict(char *dict)
{
	int	i;

	i = 0;
	while (dict[i++] != '\0')
	{
		while (dict[i] != '\n')
		{
			while (dict[i] >= '0' && dict[i] <= '9')
				i++;
			while (dict[i] == ' ')
				i++;
			if (dict[i] != ':')
			{
				write(2, "Dict Error\n", 11);
				return (0);
			}
			else
				i++;
			while (dict[i] == ' ')
				i++;
			while (dict[i] >= 33 && dict[i] <= 126)
			i++;
		}
	}
	return (1);
}

char	*new_arg(char *str)
{
	int		i;
	char	*tab;

	i = 0;
	while (str[i])
	{
		while (str[i] == '0')
			i++;
		tab = ft_strdup(str + i);
		return (tab);
	}
	return (0);
}
