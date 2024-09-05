/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniambi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 21:15:46 by tniambi-          #+#    #+#             */
/*   Updated: 2024/09/01 23:30:36 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

char	*ft_strdup(char *src);
char	*ft_read_line(char *argv);
void	ft_write_dictionary(char *dict, char *integers);
char	*ft_strstr(char *str, char *to_find);
void	greatnumber(char *dico, char *str);
void	its_ten(char c, char *dico);
char	*new_arg(char *str);
int		ft_check_dict(char *dict);
int		ft_check_number(char *argv);
void	ft_rush02(int argc, char **argv);
int		ft_write_units(char *dict, char c, char d);
int		ft_calculate_index(int length);
void	put_letters(char c, int flag);
void	ft_write_hundreds(char *dict, char c);
void	ft_write_tens(char *dict, char c, char d);
void	ft_parse_argument_power(char *dict, char *str, int length);
void	print_char(char *str, char arg, int flag);
void	print_str(char *str, char *arg, int flag);
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_create_to_find_powers(char *dict, char *str);

#endif
