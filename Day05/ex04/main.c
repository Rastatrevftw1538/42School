/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 13:54:43 by tcardoza          #+#    #+#             */
/*   Updated: 2018/06/25 14:14:56 by tcardoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"
#include "ft_putstr.c"
#include "ft_strncpy.c"

void	ft_putstr(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char str1[] = "First";
	char str2[] = "Ololo";
	char str3[] = "12345";
	ft_putstr(str1);
	ft_putstr(str2);
	ft_putstr(str3);
	ft_strncpy(str3, str2, 2);
	return (0);
}
