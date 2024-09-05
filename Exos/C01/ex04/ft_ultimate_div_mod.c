/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:05:05 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/18 17:14:50 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc != 3)
		return (0);
	x = atoi(argv[1]);
	y = atoi(argv[2]);

	printf("x = %d\n", x);
        printf("y = %d\n", y);

	ft_ultimate_div_mod(&x, &y);

	printf("ft_x = %d\n", x);
	printf("ft_y = %d\n", y);
}
*/
