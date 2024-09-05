/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:34:33 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/16 12:09:06 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	h;
	char	t;
	char	u;

	h = '0';
	while (h <= '7')
	{
		t = h + 1;
		while (t <= '8')
		{
			u = t + 1;
			while (u <= '9')
			{
				write(1, &h, 1);
				write(1, &t, 1);
				write(1, &u, 1);
				if (h != '7' || t != '8' || u != '9')
					write(1, ", ", 2);
				u++;
			}
			t++;
		}
		h++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
}
*/
