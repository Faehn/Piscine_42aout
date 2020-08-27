/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 15:05:31 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/11 21:32:22 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);
#include <stdio.h>

int main(void)
{
	char dest[] = "Hello";
	char src[] = "";

	printf("%s", ft_strcat(dest, src));
	return (0);
}
