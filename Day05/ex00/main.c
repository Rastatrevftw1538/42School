/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 10:18:14 by tcardoza          #+#    #+#             */
/*   Updated: 2018/06/25 10:27:33 by tcardoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"
#include "ft_putstr.c"

void	ft_putchar(char c);
void	ft_putstr(char *str);

int		main(void)
{
	char str1[] = "Ololo";

	ft_putstr(str1);
	ft_putchar('\n');
}
