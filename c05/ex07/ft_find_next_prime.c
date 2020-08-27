/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 16:21:29 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/13 20:06:16 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;
	int test;

	i = 2;
	test = 1;
	if (nb <= 1)
		return (0);
	while ((i * i) <= nb)
	{
		if ((nb % i) == 0)
			test++;
		i++;
	}
	if (test == 1)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
