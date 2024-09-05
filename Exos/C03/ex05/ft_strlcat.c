/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 21:00:32 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/26 12:39:00 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= size)
		return (size + src_len);
	while (src[i] != '\0' && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int     main(void)
{
        char    d1[25] = "ABCDEFGHIJKL";
        char    d2[25] = "ABCDEFGHIJKL";
        char    s[] = "0123456789";
        int     size = 0;
        ft_strlcat(d1, s, size);
        strlcat(d2, s, size);


        printf("ft = %s\n", d1);
        printf("sc = %s\n", d2);
	printf("ftr = %u\n", ft_strlcat(d1, s, size));
	printf("scr = %u\n", strlcat(d2, s, size));
}
*/
