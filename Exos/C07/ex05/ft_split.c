/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:51:54 by mlaurent          #+#    #+#             */
/*   Updated: 2024/09/05 19:00:25 by mlaurent         ###   ########.fr       */
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

int	ft_count_strings(char *str, char c)
{
	int	i;
	int	count;
	int	trigger;

	i = 0;
	count = 0;
	trigger = 1;
	while (str[i] != '\0')
	{
		if (str[i] != c && trigger == 1)
		{
			count++;
			trigger = 0;
		}
		if (str[i] == c)
			trigger = 1;
	
		i++;
	}
	return (count);
}

//char    **ft_split(char *str, char *charset)


char	**ft_split(char *str, char c)
{
	int	i;
	int	j;
	int	k;
	int	str_length;
	int	count;
	char	**array;

	i = 0;
	j = 0;
	k = 0;
	count = ft_count_strings(str, c);
	str_length = ft_strlen(str);
	array = malloc(sizeof(char) * str_length + 1);
	if (array == NULL)
		return (0);
	while (str[k] != '\0')
	{
		i = 0;
		while(str[k] != c)
		{
			j = 0;
			array[i][j] = str[k];
			k++;
			j++;
		}
		i++;
	}
	return (array);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;
	char	**target;

	i = 0;
	if (argc != 3)
		return (0);
	target = ft_split(argv[1], argv[2][0]);
	while (i < ft_count_strings(argv[1], argv[2][0]))
	{
		printf("%s\n", target[i]);
		i++;
	}
	return (0);
	//printf("%d\n", ft_count_strings(argv[1], argv[2][0]));
}
