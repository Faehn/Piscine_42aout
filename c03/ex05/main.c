/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 15:05:31 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/12 13:32:56 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
#include <stdio.h>

int main(void)
{
	char dest[6] = "Hello";
	char src[] = " Wolrd !";
	unsigned int i;
	unsigned int r;

	i = 10;
	r = ft_strlcat(dest, src, i);
	printf("%s\n%u", dest, r);
	return (0);
}
