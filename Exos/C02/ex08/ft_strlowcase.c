/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:34:15 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/20 12:45:26 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	a = ft_strlowcase(argv[1]);
	printf("%s\n", a);
}
*/
