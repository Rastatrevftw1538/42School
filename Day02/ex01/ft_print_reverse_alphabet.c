/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 12:21:50 by tcardoza          #+#    #+#             */
/*   Updated: 2018/06/21 13:58:20 by tcardoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int letter;

	letter = 122;
	while (letter > 96)
	{
		ft_putchar(letter);
		letter = letter - 1;
	}
}
