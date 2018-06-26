/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 07:53:49 by tcardoza          #+#    #+#             */
/*   Updated: 2018/06/21 13:57:25 by tcardoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	letter;

	letter = 97;
	while (letter < 123)
	{
		ft_putchar(letter);
		letter = letter + 1;
	}
}
