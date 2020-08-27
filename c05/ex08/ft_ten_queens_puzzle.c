/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 15:05:16 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/24 18:38:50 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puttab(int *tab)
{
	int		i;
	char	a;

	i = 0;
	while (i < 10)
	{
		a = tab[i] + 48;
		write(1, &a, 1);
		i++;
	}
}

int		ft_check_tile(int *oqp, int x, int y)
{
	int x_count;

	x_count = x - 1;
	while (x_count >= 0)
	{
		if (y == oqp[x_count] ||
				oqp[x_count] == (y - (x - x_count)) ||
				oqp[x_count] == (y + (x - x_count)))
			return (1);
		x_count--;
	}
	return (0);
}

void	ft_backtrack(int *oqp, int x, int *pointer)
{
	int y;

	y = 0;
	if (x == 10)
	{
		*pointer += 1;
		ft_puttab(oqp);
		write(1, "\n", 1);
	}
	while (y < 10 && x < 10)
	{
		if (ft_check_tile(oqp, x, y) == 0)
		{
			oqp[x] = y;
			ft_backtrack(oqp, x + 1, pointer);
		}
		y++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int oqp[10];
	int result;

	result = 0;
	ft_backtrack(oqp, 0, &result);
	return (result);
}
