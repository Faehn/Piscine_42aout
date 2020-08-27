/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 17:34:31 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/10 17:37:20 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str);
#include <stdio.h>

int main(void)
{
	char str[] = "Yo, comment va? Trkl ! Bref j'y g0 perso.";
	printf("%s\n", ft_strupcase(str));
	return (0);
}
