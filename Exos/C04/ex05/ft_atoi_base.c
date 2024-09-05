/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:50:47 by mlaurent          #+#    #+#             */
/*   Updated: 2024/09/04 16:13:35 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

bool	ft_test_base1(char *base)
{
	int	i;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (false);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (false);
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (false);
		i++;
	}
	return (true);
}

bool	ft_test_base2(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

int	ft_find_symbol(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	result;
	int	minus;

	i = 0;
	result = 0;
	minus = 0;
	if (ft_test_base1(base) == false || ft_test_base2(base) == false)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	while (str[i] != '\0' && ft_find_symbol(str[i], base) != -1)
	{
		result = result * ft_strlen(base) + ft_find_symbol(str[i], base);
		i++;
	}
	if (minus % 2 == 1)
		result = -result;
	return (result);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc != 3)
		return (0);
	printf("%d\n", ft_atoi_base(argv[1], argv[2]));
}
*/
