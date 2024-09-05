/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:49:39 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/20 21:10:13 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	numalpha(char n)
{
	if (n < '0' || (n > '9' && n < 'A') || (n > 'Z' && n < 'a') || n > 'z')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && !numalpha(str[i - 1]))
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z' && numalpha(str[i - 1]))
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*a;

	if (argc != 2)
		return (0);
	a = ft_strcapitalize(argv[1]);
	printf("%s\n", a);
	return (0);
}
*/
