/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 17:45:25 by thi-phng          #+#    #+#             */
/*   Updated: 2020/08/08 21:05:54 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int a);

void	ft_putline1(int x)
{
	int i;

	i = 0;
	ft_putchar('/');
	while (i < x - 2)
	{
		ft_putchar('*');
		i++;
	}
	if (x != 1)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	ft_putline2(int x)
{
	int i;

	i = 0;
	ft_putchar('*');
	while (i < x - 2)
	{
		ft_putchar(' ');
		i++;
	}
	if (x != 1)
	{
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	ft_putline3(int x)
{
	int i;

	i = 0;
	ft_putchar('\\');
	while (i < x - 2)
	{
		ft_putchar('*');
		i++;
	}
	if (x != 1)
	{
		ft_putchar('/');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = 0;
	if (x > 0 && y > 0)
	{
		ft_putline1(x);
		while (i < y - 2)
		{
			ft_putline2(x);
			i++;
		}
		if (y != 1)
		{
			ft_putline3(x);
		}
	}
}
