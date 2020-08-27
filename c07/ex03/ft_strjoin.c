/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 17:51:10 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/26 16:43:45 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_join_them(int size, char **strs, char *sep, char *dest)
{
	int i;
	int j;
	int k;

	i = -1;
	k = 0;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
		{
			dest[k] = strs[i][j];
			k++;
		}
		if (i < (size - 1))
		{
			j = -1;
			while (sep[++j])
			{
				dest[k] = sep[j];
				k++;
			}
		}
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		global_size;
	int		i;

	i = 0;
	global_size = 0;
	while (i < size)
	{
		global_size += ft_strlen(strs[i]);
		i++;
	}
	if (size > 0)
		global_size += ft_strlen(sep) * (size - 1);
	dest = malloc(sizeof(char) * global_size + 1);
	if (dest == NULL)
		return (NULL);
	dest[global_size] = '\0';
	dest = ft_join_them(size, strs, sep, dest);
	return (dest);
}
