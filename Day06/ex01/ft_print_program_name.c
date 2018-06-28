/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 14:47:11 by tcardoza          #+#    #+#             */
/*   Updated: 2018/06/27 14:47:13 by tcardoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_arr(char *arr)
{
	char	*s;

	s = arr;
	while (*s != '\0')
	{
		ft_putchar(*s);
		s++;
	}
}

int		main(int argc, char *argv[])
{
	(void)argc;
	print_arr(argv[0]);
	ft_putchar('\n');
	return (0);
}
