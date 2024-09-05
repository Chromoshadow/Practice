/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:26:06 by mlaurent          #+#    #+#             */
/*   Updated: 2024/08/28 15:48:31 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_write_args(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
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
}	

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*t;

	i = 1;
	j = 0;
	if (argc < 0)
		return (0);
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				t = argv[i];
				argv[i] = argv[j];
				argv[j] = t;
			}
			j++;
		}
		i++;
	}
	ft_write_args(argc, argv);
	return (0);
}
