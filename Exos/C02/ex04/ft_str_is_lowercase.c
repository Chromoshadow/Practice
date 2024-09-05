/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:40:12 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/20 11:56:50 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	a;

	if (argc != 2)
		return (0);
	a = ft_str_is_lowercase(argv[1]);
	printf("%d\n", a);
}
*/
