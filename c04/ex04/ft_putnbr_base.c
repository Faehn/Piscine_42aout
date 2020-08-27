/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 18:19:36 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/23 16:16:08 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_base_error(char *base)
{
	int test;
	int i;
	int j;

	test = 0;
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] ||
					base[i] == '+' ||
					base[i] == '-' ||
					(base[i] >= 9 && base[i] <= 13) ||
					base[i] == 32)
				test++;
			j++;
		}
		i++;
	}
	return (test);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_put_to_base(int a, char *base)
{
	if (a < 0)
		a *= -1;
	write(1, &base[a], 1);
}

void	ft_char_by_char(int nbr, char *base)
{
	int baselen;

	baselen = ft_strlen(base);
	if (nbr >= baselen || nbr <= (baselen * -1))
	{
		ft_char_by_char(nbr / baselen, base);
		ft_put_to_base(nbr % baselen, base);
	}
	if (nbr <= baselen && nbr >= (baselen * -1))
		ft_put_to_base(nbr, base);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;

	i = 0;
	if (ft_strlen(base) > 1 && ft_check_base_error(base) == 0)
	{
		if (nbr < 0)
			write(1, "-", 1);
		ft_char_by_char(nbr, base);
	}
	else
		return ;
}
