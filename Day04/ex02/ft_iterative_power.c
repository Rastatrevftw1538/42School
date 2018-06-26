/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 16:50:47 by tcardoza          #+#    #+#             */
/*   Updated: 2018/06/23 17:11:02 by tcardoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;

	i = 1;
	if (nb == 0)
		return (1);
	if (nb < 0 || power < 0)
		return (0);
	while (power > 0)
	{
		i = i * nb;
		power--;
	}
	return (i);
}
