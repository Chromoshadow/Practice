/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <mlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:26:05 by mlaurent          #+#    #+#             */
/*   Updated: 2024/09/02 16:20:28 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (-1);
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	min;
	int	max;
	int	*target;

	if (argc != 3)
		return (0);
	i = 0;
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	printf("ft = %d\n", ft_ultimate_range(&target, min, max));
	while (i < (max - min))
	{
		printf("%d\n", target[i]);
		i++;
	}
	return (0);
}
*/
