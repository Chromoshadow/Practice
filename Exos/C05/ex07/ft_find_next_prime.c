/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:57:15 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/27 19:57:46 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	prime;

	prime = nb;
	while (prime <= 2147483647)
	{
		if (ft_is_prime(prime) == 1)
			return (prime);
		prime++;
	}
	return (prime);
}
/*
#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char *argv[])
{
        if (argc != 2)
                return (0);
        printf("%d\n", ft_find_next_prime(atoi(argv[1])));
}
*/
