/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 21:05:41 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/19 21:25:30 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'z' || (str[i] > 'Z' && str[i] < 'a'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	printf("%d\n", ft_str_is_alpha(argv[1]));
	return (0);
}
*/
