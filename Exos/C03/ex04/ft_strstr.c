/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:00:18 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/23 11:24:46 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	length;

	i = 0;
	length = ft_strlen(to_find);
	if (length == 0)
		return (str);
	while (str[i] != '\0')
	{	
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (j == length)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	char	*genome;
	char	*sequence;

	if (argc != 3)
		return (0);
	genome = argv[1];
	sequence = argv[2];
	printf("ft = %s\n", ft_strstr(genome, sequence));
	printf("ss = %s\n", strstr(genome, sequence));
}
*/
