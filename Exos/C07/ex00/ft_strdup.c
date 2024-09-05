/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:50:09 by mlaurent          #+#    #+#             */
/*   Updated: 2024/09/03 11:37:54 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	dup = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dup == NULL)
		return (0);
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	char	*test1;
	char	*test2;

	if (argc != 2)
		return (0);
	test1 = ft_strdup(argv[1]);
	test2 = strdup(argv[1]);
	printf("ft = %s\n", test1);
	printf("ft = %s\n", test2);
}
*/
