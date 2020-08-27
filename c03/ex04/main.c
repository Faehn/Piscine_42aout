/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 15:05:31 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/24 16:27:48 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);
#include <stdio.h>

int main(void)
{
	char haystack[] = "tototu";
	char needle[] = "";

	printf("%s", ft_strstr(haystack, needle));
	return (0);
}
