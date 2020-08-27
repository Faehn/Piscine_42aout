/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 11:41:37 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/06 14:35:58 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_nbr(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

void	ft_print_comb(void)
{
	char left;
	char mid;
	char right;

	left = '0';
	while (left <= '7')
	{
		mid = left + 1;
		while (mid <= '8')
		{
			right = mid + 1;
			while (right <= '9')
			{
				ft_nbr(left, mid, right);
				if (left != '7' || mid != '8' || right != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				right++;
			}
			mid++;
		}
		left++;
	}
}
