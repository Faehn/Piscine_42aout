/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 17:03:04 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/10 17:09:00 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		ft_str_is_alpha(char *str);

void	ft_putchar(char a)
{
	a += 48;
	write(1, &a, 1);
}

int 	main(void)
{
	char *str = "fwjAjefk6";
	int test;

	test = ft_str_is_alpha(str);
	ft_putchar(test);
}
