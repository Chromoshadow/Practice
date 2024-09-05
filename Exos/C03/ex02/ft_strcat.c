/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:26:24 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/21 17:44:37 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*d;
	char	*s;

	if (argc != 3)
		return (0);
	d = argv[1];
	s = argv[2];
	ft_strcat(d, s);
	printf("%s\n", d);
	return (0);
}
*/
