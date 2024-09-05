/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:08:07 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/19 12:57:34 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				t = tab[i];
				tab[i] = tab[j];
				tab[j] = t;
			}
			j++;
		}
		i++;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	array[argc - 1];
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		array[i] = atoi(argv[i + 1]);
		i++;
	}

	ft_sort_int_tab(array, argc - 1);

	i = 0;
	while (i < argc - 1)
	{
		printf("%d\n", array[i]);
		i++;
	}
}
*/
