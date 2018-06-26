/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 12:58:08 by tcardoza          #+#    #+#             */
/*   Updated: 2018/06/26 13:00:40 by tcardoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"
#include "ft_putstr.c"
#include "ft_strupcase.c"

void	ft_putstr(char *str);
char    *ft_strupcase(char *str);

int		main(void)
{
	char str1[] = "FFG";
    
    ft_putstr(ft_strupcase(str1));
	return (0);
}
