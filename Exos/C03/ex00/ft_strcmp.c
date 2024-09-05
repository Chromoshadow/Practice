/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:28:50 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/22 17:56:19 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i1;
	unsigned int	i2;

	i1 = 0;
	i2 = 0;
	while (s1[i1] != '\0' && s2[i2] != '\0' && s1[i1] == s2[i2])
	{
		i1++;
		i2++;
	}
	return (s1[i1] - s2[i2]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{	
	char	*test1 = "aaaa";
	char    *test2 = "AAAA";
	char    *test3 = "bbbb";
	char    *test4 = "";
	char    *test5 = "aaaaaaaaa";

	printf("ft = %d\n", ft_strcmp(test1, test2));
	printf("ft = %d\n", ft_strcmp(test1, test3));
	printf("ft = %d\n", ft_strcmp(test1, test4));
	printf("ft = %d\n", ft_strcmp(test1, test5));
	printf("%d\n", strcmp(test1, test2));
	printf("%d\n", strcmp(test1, test3));
	printf("%d\n", strcmp(test1, test4));
	printf("%d\n", strcmp(test1, test5));
	return (0);
}
*/
