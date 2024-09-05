/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xpoirot <xpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:47:26 by xpoirot           #+#    #+#             */
/*   Updated: 2024/08/25 23:26:33 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonction.h"
#include <unistd.h>

char	*ft_filter_void(char *arguments)
{
	char	*nospace;
	int		i;
	int		j;

	i = 0;
	j = 0;
	nospace = arguments;
	while (i < 16)
	{
		nospace[i] = arguments[j];
		i++;
		j = j + 2;
	}
	nospace[i] = '\0';
	return (nospace);
}

int	main(int argc, char **argv)
{
	char	skyscrapper[6][6];
	char	*filtered;

	if (argc != 2)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (ft_arg_valid(argv[1]) && argc != 1)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	filtered = ft_filter_void(argv[1]);
	ft_create_2d_array(skyscrapper, filtered);
	if (place_number(skyscrapper, 1, 1))
		ft_write_2d_array(skyscrapper);
	else
		write(1, "Pas de solution", 15);
	return (0);
}
