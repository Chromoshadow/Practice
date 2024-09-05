/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 20:16:00 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/16 12:29:45 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}
/*
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	int atoied = atoi(argv[1]);
	ft_is_negative(atoied);
}
*/
