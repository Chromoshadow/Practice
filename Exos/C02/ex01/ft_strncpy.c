/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:56:07 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/19 20:59:12 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{	
	char		*d;
	char		*s;
	unsigned int	u;

	if (argc != 4)
		return (0);

	d = argv[1];
	s = argv[2];
	u = atoi(argv[3]);

	printf("strncpy = %s\n", strncpy(d, s, u));
	printf("ft_strncpy = %s\n", ft_strncpy(d, s, u));
}
*/
