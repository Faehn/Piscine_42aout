/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 15:05:31 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/11 18:26:14 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n);
#include <stdio.h>

int main(void)
{
	int r;
	unsigned int n;
	char str1[] = "Salu";
	char str2[] = "dSalut";

	n = 0;
	r = ft_strncmp(str1, str2, n);
	printf("%d", r);
	return (0);
}
