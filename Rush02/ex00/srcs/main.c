/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 22:46:43 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/08 22:46:47 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		main(void)
{
	char	str[5000];
	int		bytes;
	int		r;
	int		c;
	int		done;


	bytes = read(0, str, 4750);
	if (bytes == 0)
		return (0);
	str[bytes] = '\0';
	done = 0;
	r = cnt_rows(str);
	c = cnt_cols(str);
	((ft_cmp(str, rush00(c, r))) ? print_format('0', r, c, done++) : 0);
	((ft_cmp(str, rush01(c, r))) ? print_format('1', r, c, done++) : 0);
	((ft_cmp(str, rush02(c, r))) ? print_format('2', r, c, done++) : 0);
	((ft_cmp(str, rush03(c, r))) ? print_format('3', r, c, done++) : 0);
	((ft_cmp(str, rush04(c, r))) ? print_format('4', r, c, done++) : 0);
	if (!done)
		write(1, "aucune", 6);
	write(1, "\n", 1);
	return (0);
}
