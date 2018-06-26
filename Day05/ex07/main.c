/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 12:17:02 by tcardoza          #+#    #+#             */
/*   Updated: 2018/06/26 12:21:30 by tcardoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putnbr.c"
#include "ft_strncmp.c"
#include "ft_putchar.c"


void	ft_putnbr(int nb);
int     ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char str1[] = "asdf";
	char str2[] = "12345";
	char str3[] = "asdf";
    
    //ft_putnbr(ft_strcmp(str1, str2));
    ft_putnbr(ft_strncmp(str1, str3, 4));
	return (0);
}
