/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 17:32:09 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/26 16:28:06 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_sep(char a, char *charset)
{
	int i;
	int test;

	i = 0;
	test = 0;
	while (charset[i])
	{
		if (a == charset[i] || a == '\0')
			return (1);
		i++;
	}
	return (0);
}

char	**ft_malloc_tab(char **dest, char *str, char *charset)
{
	int n;
	int	word_count;
	int i;

	n = 0;
	word_count = 0;
	i = -1;
	while (str[++i])
		if (ft_is_sep(str[i], charset) == 0 &&
					(ft_is_sep(str[i - 1], charset) == 1 || i == 0))
		{
			while (ft_is_sep(str[i], charset) == 0 && str[i])
			{
				i++;
				word_count++;
			}
			if (!(dest[n] = malloc(sizeof(char) * word_count + 1)))
				return (NULL);
			dest[n][word_count] = '\0';
			n++;
			word_count = 0;
		}
	return (dest);
}

char	**ft_word_by_word(char **dest, char *str, char *charset)
{
	int y;
	int x;
	int i;

	y = 0;
	x = 0;
	i = 0;
	while (str[i])
	{
		if (ft_is_sep(str[i], charset) == 0 &&
					(ft_is_sep(str[i - 1], charset) == 1 || i == 0))
		{
			while (ft_is_sep(str[i], charset) == 0 && str[i])
			{
				dest[y][x] = str[i];
				x++;
				i++;
			}
			y++;
			x = 0;
		}
		i++;
	}
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int		i;
	int		word_count;

	i = 0;
	word_count = 0;
	while (str[i])
	{
		if (ft_is_sep(str[i], charset) == 0 &&
				(ft_is_sep(str[i - 1], charset) == 1 || i == 0))
			word_count++;
		i++;
	}
	if (!(dest = (char **)malloc(sizeof(char *) * word_count + 1)))
		return (NULL);
	dest[word_count] = NULL;
	if (ft_malloc_tab(dest, str, charset) == NULL)
	{
		return (NULL);
	}
	dest = ft_word_by_word(dest, str, charset);
	return (dest);
}
