/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 20:59:08 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/27 21:09:50 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	if (argc < 0)
		return (0);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
