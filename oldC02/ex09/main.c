/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 16:33:37 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/10 18:36:39 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcapitalize(char *str);
#include <stdio.h>

int main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un;mot ; 42Mot";

	printf("%s\n", str);
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
