/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmartel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:19:32 by vmartel           #+#    #+#             */
/*   Updated: 2024/08/17 20:36:12 by aguilleu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	print_first_line(int a)
{
	int	i;

	i = 0;
	if (a == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
		return (0);
	}
	ft_putchar('A');
	while (i < a - 2)
	{
		ft_putchar('B');
		i++;
	}
	ft_putchar('A');
	ft_putchar('\n');
	return (0);
}

int	print_middle_lines(int a)
{
	int	i;

	i = 0;
	if (a == 1)
	{
		ft_putchar('B');
		return (0);
	}
	ft_putchar('B');
	while (i < a - 2)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('B');
	return (0);
}

int	print_last_line(int a)
{
	int	i;

	i = 0;
	if (a == 1)
	{
		ft_putchar('C');
		ft_putchar('\n');
		return (0);
	}
	ft_putchar('C');
	while (i < a - 2)
	{
		ft_putchar('B');
		i++;
	}
	ft_putchar('C');
	ft_putchar('\n');
	return (0);
}

int	rush(int a, int b)
{
	int	i;

	i = 0;
	if (a <= 0 || b <= 0)
		return (0);
	print_first_line(a);
	while (i < b - 2)
	{
		print_middle_lines(a);
		ft_putchar('\n');
		i++;
	}
	if (b > 1)
		print_last_line(a);
	return (0);
}
