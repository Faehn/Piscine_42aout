/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 18:06:54 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/25 22:20:13 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char **ft_split(char *str, char *charset);

int		main(int ac, char **av)
{
	(void) ac;
	char **tab;
	int i;
	
	i = 0;
	tab = ft_split(av[1], av[2]);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
