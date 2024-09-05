/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:07:21 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/27 20:29:29 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	nb;

	nb = 0;
	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	else
		return (nb = ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	printf("%d\n", ft_fibonacci(atoi(argv[1])));
}
*/
