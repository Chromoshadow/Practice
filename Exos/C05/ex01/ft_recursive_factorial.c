/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:38:08 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/27 20:14:21 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	printf("%d\n", ft_recursive_factorial(atoi(argv[1])));
}
*/
