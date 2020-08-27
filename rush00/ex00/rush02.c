/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpanza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 14:55:57 by mpanza            #+#    #+#             */
/*   Updated: 2020/08/08 16:03:32 by mpanza           ###   ########.fr       */
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
	if (x != 0)
	{
		ft_putchar('A');
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
	if (x != 0)
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
	if (x != 0)
	{
		ft_putchar('C');
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
		ft_putline3(x);
	}
}
