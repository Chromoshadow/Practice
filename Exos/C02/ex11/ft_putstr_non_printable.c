/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:38:23 by mlaurent          #+#    #+#             */
/*   Updated: 2024/09/04 17:37:03 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	char	*hexa;

	i = 0;
	hexa = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127)
		{
			ft_putchar('\\');
			ft_putchar(hexa[str[i] / 16]);
			ft_putchar(hexa[str[i] % 16]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	char	*test = "Coou\auuuu\buuuuu\fuuuu\vuuuuu\rucou\ntu v\tas bien ?";
	ft_putstr_non_printable(test);
}
