/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:32:34 by mlaurent          #+#    #+#             */
/*   Updated: 2024/09/04 16:29:00 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

bool	ft_test_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (false);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (false);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	long	bignbr;
	int		digits[33];

	i = 0;
	bignbr = nbr;
	if (ft_test_base(base) == false)
		return ;
	if (bignbr < 0)
	{
		ft_putchar('-');
		bignbr = -bignbr;
	}
	if (bignbr == 0)
		ft_putchar(base[0]);
	while (bignbr > 0)
	{
		digits[i] = bignbr % ft_strlen(base);
		bignbr /= ft_strlen(base);
		i++;
	}
	while (i-- > 0)
	{
		ft_putchar(base[digits[i]]);
	}
}
/*
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 3)
		return (0);
	ft_putnbr_base(atoi(argv[1]), argv[2]);
}
*/
