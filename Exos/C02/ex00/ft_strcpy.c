/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:55:27 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/20 17:35:20 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	if (argc != 3)
		return (0);

	printf("strcpy = %s\n", strcpy(argv[1], argv[2]));
	printf("ft_strcpy = %s\n", ft_strcpy(argv[1], argv[2]));
}
*/
