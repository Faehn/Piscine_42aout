/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 16:33:37 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/10 16:52:37 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncpy(char *dest, char *src, unsigned int n);
#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

int main(void)
{
	char dest[] = "blblblblbl";
	char *src = "gaga";
	int i;
	
	i = 0;
	while (i < 10)
	{
		ft_putchar(dest[i]);
		i++;
	}
	ft_putchar('\n');
	ft_strncpy(dest, src, 8);
	i = 0;
	while (i < 10)
	{
		ft_putchar(dest[i]);
		i++;
	}
}
