/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 21:37:22 by dwidjaja          #+#    #+#             */
/*   Updated: 2018/07/07 21:37:23 by dwidjaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

void	ft_putchar(char c);
int		ft_cmp(char **a, char **b);
int		cnt_rows(char **str);
int		cnt_cols(char **str);
void	print_format(char num, int rows, int cols, int done);

#endif
