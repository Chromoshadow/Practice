/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xpoirot <xpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:45:54 by xpoirot           #+#    #+#             */
/*   Updated: 2024/08/25 23:33:32 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "condition.h"
#include <unistd.h>

void	ft_write_2d_array(char array[6][6])
{
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			write(1, &array[i][i], 1);
			if (j != 4)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	all_the_tests(char tab[6][6], int row, int col, char num)
{
	int	soluce;

	soluce = 0;
	if (col == 4)
	{
		if (ft_test_row_from_left(tab, row, col, num)
			&& ft_test_row_from_right(tab, row, col, num))
			soluce++;
	}
	else
		soluce++;
	if (row == 4)
	{
		if (ft_test_col_from_up(tab, row, col, num)
			&& ft_test_col_from_down(tab, row, col, num))
			soluce++;
	}
	else
		soluce++;
	if (soluce == 2)
	{
		return (1);
	}
	return (0);
}

int	place_number(char tab[6][6], int row, int col)
{
	char	num;

	num = '1';
	if (col == 5 && row == 4)
	{
		return (1);
	}
	if (col == 5)
	{
		row++;
		col = 1;
	}
	while (num <= '4')
	{
		if (all_the_tests(tab, row, col, num))
		{
			tab[row][col] = num;
			if (place_number(tab, row, col + 1))
				return (1);
		}
		num++;
	}
	return (0);
}

void	ft_create_2d_array(char tab[6][6], char *arguments)
{
	int		i;

	i = 0;
	while (i++ < 4)
		tab[0][i] = arguments[i - 1];
	i = 0;
	while (i++ < 4)
		tab[5][i] = arguments[i + 3];
	i = 0;
	while (i++ < 4)
		tab[i][0] = arguments[i + 7];
	i = 0;
	while (i++ < 4)
		tab[i][5] = arguments[i + 11];
}

int	ft_arg_valid(char *arg)
{
	int	i;

	i = 0;
	while (i < 31 && arg[i] != '\0')
	{
		if (!(arg[i] > 48 && arg[i] < 53))
			return (1);
		else if (arg[i] > 48 && arg[i] < 53)
			i++;
		if (arg[i] != 32 && arg[i] != '\0')
			return (1);
		else if (arg[i] == 32)
			i++;
	}
	if (i == 31 && arg[i] == '\0')
		return (0);
	else
		return (1);
}
