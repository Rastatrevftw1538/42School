/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssundara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 21:30:04 by ssundara          #+#    #+#             */
/*   Updated: 2018/06/27 13:26:07 by ssundara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

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
	int		i;

	i = 1;
	while (i < argc)
	{
		print_arr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}

void	sort_params(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	sort_params(argc, argv);
	print_params(argc, argv);
	return (0);
}
