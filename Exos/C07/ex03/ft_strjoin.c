/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 20:17:59 by mlaurent          #+#    #+#             */
/*   Updated: 2024/09/05 11:32:29 by mlaurent         ###   ########.fr       */
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

int	ft_multiples_strlen(int size, char **strs)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	return (total);
}

void	ft_concatenate(int size, char **strs, char *sep, char *concatenation)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			concatenation[k] = strs[i][j];
			j++;
			k++;
		}
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
		{
			concatenation[k] = sep[j];
			j++;
			k++;
		}
		i++;
	}
	concatenation[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		sep_length;
	int		strs_length;
	int		full_length;
	char	*concatenation;

	if (size == 0)
	{
		concatenation = malloc(sizeof(char) + 1);
		concatenation[0] = '\0';
		return (concatenation);
	}
	sep_length = ft_strlen(sep);
	strs_length = ft_multiples_strlen(size, strs);
	full_length = sizeof(char) * (strs_length + (sep_length * (size - 1))) + 1;
	concatenation = malloc(full_length);
	if (concatenation == NULL)
		return (0);
	ft_concatenate(size, strs, sep, concatenation);
	return (concatenation);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*test;
	char	*sep = "===";

	if (argc < 0)
		return (0);
	test = ft_strjoin(argc - 1, argv + 1, sep);
	printf("%s\n", test);
	free(test);
}
*/
