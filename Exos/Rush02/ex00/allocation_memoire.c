/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocation_memoire.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 21:03:18 by efranco           #+#    #+#             */
/*   Updated: 2024/09/01 22:12:38 by tniambi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

char	*ft_read_line(char *argv)
{
	int		i;
	char	*reader;
	int		fd;

	i = 1;
	while (i++)
	{
		fd = open(argv, O_RDONLY | O_EXCL);
		reader = malloc(sizeof(char) * i + 1);
		read(fd, reader, i);
		if (reader[i - 1] == '\0')
			break ;
		free(reader);
	}
	reader[i] = '\0';
	return (reader);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		size;
	int		i;

	size = ft_strlen(src);
	i = 0;
	dest = malloc(sizeof(char) * size + 1);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
