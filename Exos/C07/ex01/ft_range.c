/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:14:36 by mlaurent          #+#    #+#             */
/*   Updated: 2024/09/02 16:08:06 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (0);
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{	
	int	i;
	int	min;
	int	max;
	int	*array;

	if (argc != 3)
		return (0);
	i = 0;
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	array = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d\n", array[i]);
		i++;
	}
	return (0);
}
*/
