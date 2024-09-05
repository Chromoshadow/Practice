/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 21:34:05 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/18 12:26:04 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	if (argc != 3)
		return (0);
	ft_swap(&a, &b);

	printf("swap a = %d\n", a);
	printf("swap b = %d\n", b);
}
*/
