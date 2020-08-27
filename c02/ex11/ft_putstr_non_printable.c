/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 20:08:25 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/11 12:57:42 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char a)
{
	write(1, &a, 1);
}

void	ft_puthex(unsigned char a)
{
	char b;
	char c;

	b = a / 16;
	c = a % 16;
	ft_putchar('\\');
	if (b > 9)
		ft_putchar(b + 87);
	else
		ft_putchar(b + 48);
	if (c > 9)
		ft_putchar(c + 87);
	else
		ft_putchar(c + 48);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
			ft_puthex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
