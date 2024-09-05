/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:49:43 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/27 20:19:43 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 3)
		return (0);
	printf("%d\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
}
*/
