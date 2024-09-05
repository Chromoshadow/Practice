/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 20:33:17 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/15 22:03:09 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	digits[11];
	long	l;
	int		i;

	l = nb;
	i = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		l = l * -1;
	}
	if (nb == 0)
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
	int	atoied;

	if (argc != 2)
		return (0);
	atoied = atoi(argv[1]);
	ft_putnbr(atoied);
}
*/
