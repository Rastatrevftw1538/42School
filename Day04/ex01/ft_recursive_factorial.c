/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 13:17:55 by tcardoza          #+#    #+#             */
/*   Updated: 2018/06/23 15:57:40 by tcardoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int i;

	i = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	return (ft_recursive_factorial(nb - 1) * nb);
}
