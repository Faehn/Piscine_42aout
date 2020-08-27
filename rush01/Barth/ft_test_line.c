/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 17:23:30 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/16 14:32:06 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_available(int *line, int value, int limit);

int	ft_check_left_view(int *line, int i, int vision)
{
	int test;
	int greatest;

	greatest = 0;
	test = 0;
	while (i < 5)
	{
		if (line[i] > greatest)
		{
			test++;
			greatest = line[i];
		}
		i++;
	}
	if (test != vision)
		return (0);
	else
		return (1);
}

int	ft_check_right_view(int *line, int i, int vision)
{
	int test;
	int greatest;

	greatest = 0;
	test = 0;
	while (i > 0)
	{
		if (line[i] > greatest)
		{
			test++;
			greatest = line[i];
		}
		i--;
	}
	if (test != vision)
		return (0);
	else
		return (1);
}

int	ft_calc_lines(int *line)
{
	if (ft_check_left_view(line, 1, line[0]) == 0 ||
			ft_check_right_view(line, 4, line[5]) == 0)
		return (0);
	else
		return (1);
}

int	ft_test_line(int *line, int i)
{
	int value;
	int filled;

	value = 1;
	filled = 0;
	if (i == 5)
	{
		if (ft_calc_lines(line) == 0)
			return (0);
		else
			return (1);
	}
	while (value < 5 && filled == 0)
	{
		if (ft_is_available(line, value, i) == 1)
		{
			line[i] = value;
			filled = ft_test_line(line, i + 1);
		}
		value++;
	}
	if (filled == 0)
		return (0);
	else
		return (1);
}
