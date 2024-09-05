/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:01:29 by mlaurent          #+#    #+#             */
/*   Updated: 2024/09/02 20:25:46 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_length;
	unsigned int	i;

	src_length = 0;
	i = 0;
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_length);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	dest1[30] = "";
	char	dest2[30] = "";
	char	src2[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char    src1[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	unsigned int	size = 20;

	unsigned int	ft = ft_strlcpy(dest1, src1, size);
	unsigned int	sd = strlcpy(dest2, src2, size);

	printf("dest1 = %s\n", dest1);
	printf("ft = %d\n", ft);
	printf("dest2 = %s\n", dest2);
	printf("sd = %d\n", sd);
	return (0);
}
*/
