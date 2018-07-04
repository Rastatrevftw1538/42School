/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 12:24:02 by tcardoza          #+#    #+#             */
/*   Updated: 2018/07/04 12:24:12 by tcardoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTIL_H
# define UTIL_H

# define BUFFER_SIZE 4096
void	ft_putchar(int out, char c);
void	ft_putstr(char *str);
void	ft_putnbr(int i);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
char	*ft_strrev(char *str);
void	ft_swap(int *a, int *b);
void	ft_puterror(char *str);
#endif
