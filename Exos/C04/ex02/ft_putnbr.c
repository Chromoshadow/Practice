/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:43:06 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/28 11:16:03 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	digits[11];
	int		i;
	long	l;

	i = 0;
	l = nb;
	if (l < 0)
	{
		write(1, "-", 1);
		l = -l;
	}
	if (l == 0)
		write(1, "0", 1);
	while (l > 0)
	{
		digits[i] = l % 10 + '0';
		l /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &digits[i], 1);
		i--;
	}
}
/*
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	ft_putnbr(atoi(argv[1]));
}
*/
