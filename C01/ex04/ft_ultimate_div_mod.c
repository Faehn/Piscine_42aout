/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 16:08:47 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/07 16:14:02 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int y;
	int z;

	y = *a / *b;
	z = *a % *b;
	*a = y;
	*b = z;
}
