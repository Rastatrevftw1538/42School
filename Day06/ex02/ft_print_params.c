/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 17:07:06 by tcardoza          #+#    #+#             */
/*   Updated: 2018/06/27 17:07:08 by tcardoza         ###   ########.fr       */
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

void	print_params(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		print_arr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char *argv[])
{
	print_params(argc, argv);
	return (0);
}
