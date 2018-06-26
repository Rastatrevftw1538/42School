/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 21:37:50 by tcardoza          #+#    #+#             */
/*   Updated: 2018/06/21 23:39:18 by tcardoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	while (a < 10)
	{
		b = a + 1;
		while (b < 10)
		{
			c = b + 1;
			while (c < 10)
			{
				ft_putchar(48 + a);
				ft_putchar(48 + b);
				ft_putchar(48 + c);
				if (!(a == 7 && b == 8 && c == 9))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
