/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 12:23:34 by tcardoza          #+#    #+#             */
/*   Updated: 2018/07/04 12:23:38 by tcardoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "util.h"

void	ft_putchar(int out, char c)
{
	write(out, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(1, str[i]);
		i++;
	}
}

void	ft_puterror(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		ft_putchar(2, str[i]);
		i++;
	}
}
