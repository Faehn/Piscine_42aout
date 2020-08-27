/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 18:32:21 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/14 14:09:43 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_sort_2d_tab(int count, char **tab)
{
	char	*temp;
	int		i;
	int		sorted;

	sorted = 1;
	while (sorted > 0)
	{
		sorted = 0;
		i = 2;
		while (i < count)
		{
			if (ft_strcmp(tab[i - 1], tab[i]) > 0)
			{
				temp = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = temp;
				sorted++;
			}
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int i;

	ft_sort_2d_tab(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
