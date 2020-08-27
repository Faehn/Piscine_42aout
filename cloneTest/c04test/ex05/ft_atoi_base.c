/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 21:38:37 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/24 15:29:33 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_where_in_base(char *base, char a)
{
	int i;

	i = 0;
	while (base[i] != a && base[i])
		i++;
	if (base[i] == '\0')
		return (-1);
	else
		return (i);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base_error(char *base)
{
	int test;
	int i;
	int j;

	test = 0;
	i = -1;
	while (i++ && base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == 32 ||
				(base[i] >= 9 && base[i] <= 13))
			test++;
	}
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				test++;
			j++;
		}
		i++;
	}
	return (test);
}

int	ft_atoi_base(char *str, char *base)
{
	int i;
	int sign;
	int nb;

	i = 0;
	sign = 1;
	nb = 0;
	if (ft_strlen(base) > 1 && ft_check_base_error(base) == 0)
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		i--;
		while (++i && (str[i] == '+' || str[i] == '-'))
			if (str[i] == '-')
				sign *= -1;
		i--;
		while (++i && ft_where_in_base(base, str[i]) != -1)
			nb = (nb * ft_strlen(base)) + ft_where_in_base(base, str[i]);
		nb *= sign;
		return (nb);
	}
	return (0);
}
