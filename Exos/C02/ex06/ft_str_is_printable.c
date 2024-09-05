/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:10:03 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/20 21:18:07 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
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
	a = ft_str_is_printable(argv[1]);
	printf("%d\n", a);
	return (0);
}
*/
