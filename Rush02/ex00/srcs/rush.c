/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 22:47:51 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/08 22:47:52 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "rush.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_cmp(char **a, char **b)
{
	int i;
	int	j;

	i = 0;
	while (a[i] || b[i])
	{
		j = 0;
		while (a[i][j] || b[i][j])
		{
			if (a[i][j] != b[i][j])
				return (0);
			j++;		
		}
		i++;
	}
	if (a[i] != NULL || b[i] != NULL)
		return (0);
	return (1);
}

int		cnt_rows(char **str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		cnt_cols(char **str)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (str[i][j])
		j++;
	return (j);
}

void	print_format(char num, int rows, int cols, int done)
{
	if (done > 0)
		write(1, " || ", 4);
	write(1, "[rush-0", 7);
	write(1, &num, 1);
	write(1, "] [", 3);
	ft_putnbr(cols);
	write(1, "] [", 3);
	ft_putnbr(rows);
	write(1, "]", 1);
}
