/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 20:24:07 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/27 20:23:35 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char *argv[])
{
        if (argc != 3)
                return (0);
        printf("%d\n", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
}
*/
