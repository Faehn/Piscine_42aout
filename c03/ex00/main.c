/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 15:05:31 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/11 16:28:42 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2);
#include <stdio.h>

int main(void)
{
	int r;
	char str1[] = "Salut";
	char str2[] = "Salute";

	r = ft_strcmp(str1, str2);
	printf("%d", r);
	return (0);
}
