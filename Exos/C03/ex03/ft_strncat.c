/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:47:48 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/22 20:36:25 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	while (dest[length] != '\0')
		length++;
	while (src[i] != '\0' && i < nb)
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	d1[25] = "ABCDEFGHIJ";
	char    d2[25] = "ABCDEFGHIJ";
	char	s[] = "0123456789";
	int	size = 5;
	ft_strncat(d1, s, size);
	strncat(d2, s, size);


	printf("ft = %s\n", d1);
	printf("sc = %s\n", d2);
}
*/
