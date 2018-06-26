/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 11:39:14 by tcardoza          #+#    #+#             */
/*   Updated: 2018/06/25 11:50:26 by tcardoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_putchar.c"
#include "ft_putnbr.c"
#include "ft_atoi.c"


int		main(void)
{
    int a;


    a = ft_atoi("0042");
    ft_putnbr(a);
	ft_putchar('\n');
    return (0);
}
