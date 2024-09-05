/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 21:08:23 by efranco           #+#    #+#             */
/*   Updated: 2024/09/01 22:11:52 by tniambi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

void	its_ten(char c, char *dico)
{
	char	*tab;

	tab = malloc(sizeof(char) * 3);
	if (c == '0')
		return ;
	tab[0] = c;
	tab[1] = '0';
	tab[2] = '\0';
	print_str(dico, tab, 1);
	free(tab);
}

void	greatnumber(char *dico, char *str)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(str);
	if (size == 3)
	{
		print_char(dico, str[0], 1);
		print_str(dico, "100", 1);
		if (str[1] != '0')
			its_ten(str[1], dico);
		if (str[2] != '0')
			print_char(dico, str[2], 0);
	}
	if (size == 2)
	{
		its_ten(str[0], dico);
		if (str[1] != '0')
			print_char(dico, str[1], 0);
	}
	if (size == 1)
	{
		print_char(dico, str[0], 0);
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	length;

	i = 0;
	length = ft_strlen(to_find);
	if (length == 0)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (j == length)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

void	ft_write_dictionary(char *dict, char *integers)
{
	int		i;
	char	*pattern;

	i = 0;
	pattern = ft_strstr(dict, integers);
	while (pattern[i] != '\0' && pattern[i] != '\n')
	{
		if (pattern[i] >= 'a' && pattern[i] <= 'z')
			ft_putchar(pattern[i]);
		i++;
	}
}
