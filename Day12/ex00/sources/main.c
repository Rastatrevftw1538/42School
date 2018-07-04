/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 12:23:03 by tcardoza          #+#    #+#             */
/*   Updated: 2018/07/04 12:23:17 by tcardoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "util.h"

int			read_content(char *path)
{
	int		fd;
	int		size;
	char	buff[BUFFER_SIZE + 1];

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		ft_puterror("open() failed\n");
		return (0);
	}
	
	size = read(fd, buff, BUFFER_SIZE);
	if (size == -1)
	{
		ft_puterror("read() failed\n");
		return (0);
	}
	buff[size] = '\0';
	
	if (close(fd) == -1)
	{
		ft_puterror("close() failed\n");
		return (0);
	}
	ft_putstr(buff);
	return (1);
}

int			main(int size, char**args)
{
	if (size == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	else if (size > 2)
	{
		ft_putstr("Too many arguments. \n");
		return (0);
	}
	if (!read_content(args[1]))
	{
		ft_puterror("error when trying to open/read or close the file\n");
		return (0);
	}
			
	return (0);
}
