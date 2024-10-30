/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:10:50 by gueberso          #+#    #+#             */
/*   Updated: 2024/10/30 17:23:08 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_read_n_write(int fd)
{
	char	buffer[BUFFER_SIZE];
	int		bytes;

	bytes = read(fd, buffer, BUFFER_SIZE);
	while (bytes > 0)
	{
		write(1, &buffer, bytes);
		bytes = read(fd, buffer, BUFFER_SIZE);
	}
}

int	main(int ac, char **av)
{
	int	fd;

	if (ac != 2)
	{
		if (ac > 2)
			write(2, "Too many arguments.\n", 20);
		else if (ac < 2)
			write(2, "File name missing.\n", 19);
		return (-1);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (-1);
	}
	ft_read_n_write(fd);
	close(fd);
	return (0);
}
