/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:11:00 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/22 11:48:45 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	c = c + '0';
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	left;
	int	right;

	left = 0;
	while (left <= 98)
	{
		right = left + 1;
		while (right <= 99)
		{
			if (right != left)
			{
				ft_putchar(left / 10);
				ft_putchar(left % 10);
				write(1, " ", 1);
				ft_putchar(right / 10);
				ft_putchar(right % 10);
				if (left != 98 || right != 99)
					write(1, ", ", 2);
			}
			right++;
		}
		left++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
