/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 14:34:19 by tcardoza          #+#    #+#             */
/*   Updated: 2018/06/25 14:39:36 by tcardoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"
#include "ft_strstr.c"
#include "ft_putstr.c"

void	ft_putstr(char *str);
char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str1[] = "FirstSecondThird";
	char str2[] = "Second";
	char str3[] = "12345";
	ft_putstr(str1);
	ft_putstr(str2);
    ft_putstr(ft_strstr(str1, str2));
	return (0);
}

