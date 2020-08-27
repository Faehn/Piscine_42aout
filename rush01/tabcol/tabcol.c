/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabcol.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 15:19:52 by nxu               #+#    #+#             */
/*   Updated: 2020/08/15 17:31:55 by nxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	*ft_col_to_tab(int tab[6][6], int x)
{
	int i;
	int *line;

	i = 0;
	while (i < 6)
	{
		line[i] = tab[x][i];
		i++;
	}
	return (line);
}

void	ft_putchar(char a)
{
	write(1, &a, 1);
}
void	ft_puttab(int *tab)
{
	int i;

	i = 0;
	while (i < 6)
	{
		ft_putchar(tab[i] + 48);
		i++;
	}
}

int main(void)
{
	int tab[6][6] = {{1, 2, 3, 4, 5, 6}, 
					{2, 3, 4, 5, 6, 1}, 
					{3, 4, 5, 6, 1, 2}, 
					{4, 5, 6, 1, 2, 3}, 
					{5, 6, 1, 2, 3, 4}, 
					{6, 1, 2, 3, 4, 5}};

	ft_puttab(ft_col_to_tab(tab, 5));
			return (0);
}
