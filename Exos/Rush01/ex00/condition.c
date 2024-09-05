/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xpoirot <xpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:27:55 by xpoirot           #+#    #+#             */
/*   Updated: 2024/08/25 21:27:57 by xpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_number(char tab[6][6], int row, int col, char num)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if ((tab[row][i] == num) && (i != col))
			return (0);
		i++;
	}
	i = 1;
	while (i < 5)
	{
		if ((tab[i][col] == num) && (i != row))
			return (0);
		i++;
	}
	return (1);
}

int	ft_test_col_from_up(char tab[6][6], int row, int col, char num)
{
	int		j;
	char	count;
	char	max;

	max = '0';
	count = '0';
	tab[row][col] = num;
	if (check_number(tab, row, col, num))
	{
		j = 1;
		while (j < 5)
		{
			if (tab[j][col] > max)
			{
				max = tab[j][col];
				count++;
			}
			j++;
		}
	}
	tab[row][col] = '0';
	if (count == tab[0][col])
		return (1);
	else
		return (0);
}

int	ft_test_row_from_left(char tab[6][6], int row, int col, char num)
{
	int		j;
	char	count;
	char	max;

	max = '0';
	count = '0';
	tab[row][col] = num;
	if (check_number(tab, row, col, num))
	{
		j = 1;
		while (j < 5)
		{
			if (tab[row][j] > max)
			{
				max = tab[row][j];
				count++;
			}
			j++;
		}
	}
	tab[row][col] = '0';
	if (count == tab[row][0])
		return (1);
	else
		return (0);
}

int	ft_test_col_from_down(char tab[6][6], int row, int col, char num)
{
	int		j;
	char	count;
	char	max;

	tab[row][col] = num;
	max = '0';
	count = '0';
	if (check_number(tab, row, col, num))
	{
		j = 4;
		while (j > 0)
		{
			if (tab[j][col] > max)
			{
				max = tab[j][col];
				count++;
			}
			j--;
		}
	}
	tab[row][col] = '0';
	if (count == tab[5][col])
		return (1);
	else
		return (0);
}

int	ft_test_row_from_right(char tab[6][6], int row, int col, char num)
{
	int		j;
	char	count;
	char	max;

	tab[row][col] = num;
	max = '0';
	count = '0';
	if (check_number(tab, row, col, num))
	{
		j = 4;
		while (j > 0)
		{
			if (tab[row][j] > max)
			{
				max = tab[row][j];
				count++;
			}
			j--;
		}
	}
	tab[row][col] = '0';
	if (count == tab[row][5])
		return (1);
	else
		return (0);
}
