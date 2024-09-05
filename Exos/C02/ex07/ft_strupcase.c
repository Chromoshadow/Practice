/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:22:18 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/20 12:32:12 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
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
	a = ft_strupcase(argv[1]);
	printf("%s\n", a);
}
*/
