/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 11:57:48 by tcardoza          #+#    #+#             */
/*   Updated: 2018/06/25 12:09:26 by tcardoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"
#include "ft_putstr.c"
#include "ft_strcpy.c"

void	ft_putstr(char *str);
char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char str1[] = "First";
	char str2[] = "Ololo";
	char str3[] = "12345";
	ft_putstr(str1);
	ft_putstr(str2);
	ft_putstr(str3);
	ft_strcpy(str3, str2);
	return (0);
}

