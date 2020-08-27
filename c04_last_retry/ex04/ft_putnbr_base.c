/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 18:19:36 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/24 16:11:46 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_base_error_1(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
		i++;
	if (i <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_check_base_error_2(char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' ||
				base[i] == '-' ||
				(base[i] >= 9 && base[i] <= 13) ||
				base[i] == 32)
			return (0);
		i++;
	}
	return (1);
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

	baselen = 0;
	while (base[baselen])
		baselen++;
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
	if (ft_check_base_error_1(base) == 1 && ft_check_base_error_2(base) == 1)
	{
		if (nbr < 0)
			write(1, "-", 1);
		ft_char_by_char(nbr, base);
	}
	else
		return ;
}
