/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xpoirot <xpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:27:55 by xpoirot           #+#    #+#             */
/*   Updated: 2024/08/25 21:29:27 by xpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FONCTION_H
# define FONCTION_H

int		ft_arg_valid(char *arg);

void	ft_create_2d_array(char array[6][6], char *arguments);

int		place_number(char tab[6][6], int row, int col);

int		all_the_tests(char tab[6][6], int row, int col, char num);

void	ft_write_2d_array(char array[6][6]);

#endif
