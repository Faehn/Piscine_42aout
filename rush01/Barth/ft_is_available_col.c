/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_available_col.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 17:55:59 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/16 18:27:10 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_available_col(int **tab, int x, int value, int limit)
{
	int i;

	i = 1;
	while (i < limit)
	{
		if (value == tab[i][x])
			return (0);
		i++;
	}
	return (1);
}
