/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguilleu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 10:57:52 by aguilleu          #+#    #+#             */
/*   Updated: 2024/08/22 14:49:45 by mlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	rush(int a, int b);

/*
int	rush_atoi(char *str)
{
	int	i;
	int	number;
	
	i = 0;
	number = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			number = number * 10 + (str[i] - '0');
		}
		i++;
	}
	return (number);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc != 3)
		return (0);
	x = rush_atoi(argv[1]);
	y = rush_atoi(argv[2]);
	rush(x, y);
	return (0);
}
*/

int	main(void)
{
	rush(42, 42);
	return (0);
}
