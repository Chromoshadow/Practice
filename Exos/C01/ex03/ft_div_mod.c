/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 12:27:41 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/18 16:55:01 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	i = atoi(argv[1]);
	int	j = atoi(argv[2]);

	if (argc != 3)
		return(0);

	int	division = 0;
	int	modulo = 0;

	int	*ptr1 = &division;
	int	*ptr2 = &modulo;

	ft_div_mod(i, j, ptr1, ptr2);

	printf("div = %d\n", division);
	printf("mod = %d\n", modulo);

	printf("ptr1 = %d\n", *ptr1);
	printf("ptr2 = %d\n", *ptr2);
}
*/
