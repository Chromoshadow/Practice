/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:27:20 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/28 11:19:21 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	minus;

	i = 0;
	result = 0;
	minus = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if (minus % 2 == 1)
		result *= -1;
	return (result);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	printf("%d\n", ft_atoi(argv[1]));
}
*/
