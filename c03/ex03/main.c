/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 15:05:31 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/11 21:53:45 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);
#include <stdio.h>

int main(void)
{
	char dest[6] = "Hello";
	char src[] = " Wolrd !";

	printf("%s", ft_strncat(dest, src, 100000));
	return (0);
}
