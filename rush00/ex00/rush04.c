/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 15:17:08 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/08 18:15:40 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_putline1(int x)
{
	int i;

	i = 0;
	ft_putchar('A');
	while (i < (x - 2))
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	ft_putline2(int x)
{
	int i;

	i = 0;
	ft_putchar('B');
	while (i < (x - 2))
	{
		ft_putchar(' ');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	ft_putline3(int x)
{
	int i;

	i = 0;
	ft_putchar('C');
	while (i < (x - 2))
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	if (x > 0 && y > 0)
	{
		i = 0;
		ft_putline1(x);
		while (i < (y - 2))
		{
			ft_putline2(x);
			i++;
		}
		if (y > 1)
		{
			ft_putline3(x);
		}
	}
}
