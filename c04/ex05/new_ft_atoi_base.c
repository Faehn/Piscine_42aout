/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wszurkow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 17:22:46 by wszurkow          #+#    #+#             */
/*   Updated: 2020/08/11 16:08:42 by wszurkow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int		is_in_base(char c, char *base)
{
	while (*base)
	{
		if (c == *base)
			return (1);
		base++;
	}
	return (0);
}

int		base_index(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int		check_invalid_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (1);
	while (base[i])
	{
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (1);
		if (base[i] == '-' || base[i] == '+')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int	i;
	int atoi;
	int np;

	np = 1;
	i = 0;
	atoi = 0;
	if (check_invalid_base(base))
		return (0);
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') ||
			(str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			np = -np;
		i++;
	}
	while (str[i] && is_in_base(str[i], base))
	{
		atoi = atoi * ft_strlen(base) + base_index(str[i], base);
		i++;
	}
	return (atoi * np);
}
