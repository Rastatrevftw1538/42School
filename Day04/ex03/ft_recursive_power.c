/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 16:50:47 by tcardoza          #+#    #+#             */
/*   Updated: 2018/06/23 20:33:49 by tcardoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int i;

	i = 1;
	if ( power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power >= 31)
		return (0);
	return (nb * (ft_recursive_power(nb, power - 1)));
}
