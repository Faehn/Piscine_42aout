/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tile.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 09:41:48 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/16 18:32:37 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_test_line(int *line, int i);
int	ft_is_available(int *line,  int value, int limit);
int ft_test_col(int **tab, int x, int i);
int ft_is_available_col(int **tab, int x, int value, int limit);

int	ft_check_tile(int *row, int **tab, int x, int y)
{	
	if (ft_test_line(row, (x + 1)) == 1 && ft_test_col(tab, x, (y + 1)) == 1)
		return (1);
	else
		return (0);
}

int ft_fill_2d_tab(int **tab, int i)
{
	int v;
	int x;
	int y;
	int finished;

	v = 1;
	x = (i % 4) + 1;
	y = (i / 4) + 1;
	finished = 0;
	if (i == 16)
		return (1);
	while (v < 5 && finished == 0)
	{
		if (ft_is_available_col(tab, x, v, y) == 1 && ft_is_available(tab[y], v, x) == 1)
		{
			tab[y][x] = v;
			if (ft_check_tile(tab[y], tab, x, y))
				finished = ft_fill_2d_tab(tab, (i + 1));
		}
		v++;
	}
	if (finished == 0)
		return (0);
	else
		return(1);
}
