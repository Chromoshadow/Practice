/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 21:00:29 by efranco           #+#    #+#             */
/*   Updated: 2024/09/01 22:09:25 by tniambi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

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

void	ft_create_to_find_powers(char *dict, char *str)
{
	char	*to_find;
	int		i;

	i = 1;
	to_find = malloc(sizeof(char) * ft_strlen(str) + 1);
	to_find[0] = '1';
	while (i < ft_strlen(str))
	{
		to_find[i] = '0';
		i++;
	}
	to_find[i] = '\0';
	ft_write_dictionary(dict, to_find);
	free(to_find);
}
