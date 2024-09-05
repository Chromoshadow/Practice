/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xpoirot <xpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:27:55 by xpoirot           #+#    #+#             */
/*   Updated: 2024/08/25 21:39:02 by xpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONDITION_H
# define CONDITION_H

int	check_number(char tab[6][6], int row, int col, char num);

int	ft_test_col_from_up(char tab[6][6], int row, int col, char num);

int	ft_test_row_from_left(char tab[6][6], int row, int col, char num);

int	ft_test_col_from_down(char tab[6][6], int row, int col, char num);

int	ft_test_row_from_right(char tab[6][6], int row, int col, char num);

#endif
