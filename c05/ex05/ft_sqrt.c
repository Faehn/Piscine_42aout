/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 15:12:26 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/23 16:52:21 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int i;
	long int x;

	i = 0;
	while ((i * i) < nb)
		i++;
	x = i;
	if ((i * i) == nb)
		return (x);
	else
		return (0);
}
