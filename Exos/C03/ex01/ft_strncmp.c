/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:04:34 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/27 12:40:02 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	result;	
	unsigned int	u;

	u = 0;
	result = 0;
	while ((s1[u] != '\0' || s2[u] != '\0') && u < n)
	{
		if (s1[u] == s2[u])
			result = 0;
		else
		{
			result = s1[u] - s2[u];
			return (result);
		}
		u++;
	}
	return (result);
}
/*
#include <stdio.h>
#include <string.h>

int     main(void)
{
	int	size = 1;
        char    *test1 = "aaaa";
        char    *test2 = "AAAA";
        char    *test3 = "bbbb";
        char    *test4 = "";
        char    *test5 = "aaaaaaaaaaa";
	char    *test6 = "aZaaaaaaaaa";
	char    *test7 = "aaaaaaaaaZa";

        printf("ft = %d\n", ft_strncmp(test1, test2, size));
        printf("ft = %d\n", ft_strncmp(test1, test3, size));
        printf("ft = %d\n", ft_strncmp(test1, test4, size));
        printf("ft = %d\n", ft_strncmp(test1, test5, size));
	printf("ft = %d\n", ft_strncmp(test1, test6, size));
	printf("ft = %d\n", ft_strncmp(test1, test7, size));
        printf("sd = %d\n", strncmp(test1, test2, size));
        printf("sd = %d\n", strncmp(test1, test3, size));
        printf("sd = %d\n", strncmp(test1, test4, size));
    	printf("sd = %d\n", strncmp(test1, test5, size));
	printf("sd = %d\n", strncmp(test1, test6, size));
	printf("sd = %d\n", strncmp(test1, test7, size));
	return (0);
}
*/
