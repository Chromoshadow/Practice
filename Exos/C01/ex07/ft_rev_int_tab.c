/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:40:09 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/18 18:05:36 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	t;

	i = 0;
	while (i < size / 2)
	{
		t = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = t;
		i++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	array[] = {1, 2, 3, 4, 5, 6};
	int	length = 6;
	int	i = 0;

	ft_rev_int_tab(array, length);

	while (i < length)
	{
		printf("%d\n", array[i]);
		i++;
	}
}
*/
