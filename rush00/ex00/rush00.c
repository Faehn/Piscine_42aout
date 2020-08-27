/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 15:25:06 by thi-phng          #+#    #+#             */
/*   Updated: 2020/08/08 17:35:07 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_putline1(int x)
{
	int i;

	i = 0;
	ft_putchar('o');
	while (i < x - 2)
	{
		ft_putchar('-');
		i++;
	}
	if (x != 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	ft_putline2(int x)
{
	int i;

	i = 0;
	ft_putchar('|');
	while (i < x - 2)
	{
		ft_putchar(' ');
		i++;
	}
	if (x != 1)
	{
		ft_putchar('|');
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
			ft_putline1(x);
		}
	}
}
