/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_col.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 17:45:48 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/16 18:21:11 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_available(int **tab, int x, int value, int limit);

int	ft_check_top_view(int **tab, int x, int i, int vision)
{
	int test;
	int greatest;

	greatest = 0;
	test = 0;
	while (i < 5)
	{
		if (tab[i][x] > greatest)
		{
			test++;
			greatest = tab[i][x];
		}
		i++;
	}
	if (test != vision)
		return (0);
	else
		return (1);
}

int	ft_check_bottom_view(int **tab, int x, int i, int vision)
{
	int test;
	int greatest;

	greatest = 0;
	test = 0;
	while (i > 0)
	{
		if (tab[i][x] > greatest)
		{
			test++;
			greatest = tab[i][x];
		}
		i--;
	}
	if (test != vision)
		return (0);
	else
		return (1);
}

int	ft_calc_col(int **tab, int x)
{
	if (ft_check_top_view(tab, x, 1, tab[0][x]) == 0 ||
			ft_check_bottom_view(tab, x, 4, tab[5][x]) == 0)
		return (0);
	else
		return (1);
}

int	ft_test_col(int **tab, int x, int i)
{
	int value;
	int filled;

	value = 1;
	filled = 0;
	if (i == 5)
	{
		if (ft_calc_col(tab, x) == 0)
			return (0);
		else
			return (1);
	}
	while (value < 5 && filled == 0)
	{
		if (ft_is_available(tab, x, value, i) == 1)
		{
			tab[i][x] = value;
			filled = ft_test_col(tab, x, i + 1);
		}
		value++;
	}
	if (filled == 0)
		return (0);
	else
		return (1);
}
