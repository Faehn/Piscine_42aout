/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remplitab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 15:35:19 by tigerber          #+#    #+#             */
/*   Updated: 2020/08/16 17:59:18 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *strbis(char *str)
{
	int i;
	int j;
	char *strb;

	i = 0;
	j = 0;
	strb = malloc(sizeof(char) * 17);
	if (strb == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		if(str[i] >= '1' && str[i] <= '4')
		{
			strb[j] = str[i];
			j++;
		}
		i++;
	}
	strb[j] = '\0';
	return (strb);
}

int  tchekparam(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '1' && str[i] <= '4'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int **remplitab(char *str)
{
	int i;
	int j;
	int m;
	char *num = strbis(str);
	int **tab;

	m = 0;
	i = 0;
	j = 1;
	tab = (int**)malloc(sizeof(int*) * 6);
	if(tab == NULL)
	{
		return (NULL);
	}
	while (m <  6)
	{
		tab[m] = (int*)malloc(sizeof(int) * 6);
		m++;
	}
	m = 0;
   	i = 0;
	while (i < 6)
	{
		while (m < 6)
		{
			tab[i][m] = 0;
			m++;
		}
		m = 0;
		i++;
	}
	i = 0;	
	if (tchekparam(num) == 1)
	{
		while (num[i] != '\0' && j < 5 ) // colup de 1 a 4
		{
			tab[0][j] = num[i] - '0';
			j++;
			i++;
		}
		j = 1;
		while (num[i] != '\0' && j < 5) // coldown de 1 a 4
		{
			tab[5][j] = num[i] - '0';
			j++;
			i++;
		}
		j = 1;
		while (num[i] != '\0' && j < 5) // rowleft de 1 a 4
		{
			tab[j][0] = num[i] - '0';
			j++;
			i++;
		}
		j = 1;
		while (num[i] != '\0' && j < 5) // rowright de 1 a 4
		{
			tab[j][5] = num[i] - '0';
			j++;
			i++;
		}
	}
	return (tab);
}

#include <stdio.h>

int main(int ac, char **av)
{
	int i;
	int j;
	(void)ac;
	int **tab = remplitab(av[1]);

	i = 0;
	j = 0;
	
	while (i <  6)
	{
		while (j < 6)
		{
		printf("%d", tab[i][j]);
		j++;
		}
		printf("\n");
		j = 0;
		i++;
	}		
	return (0);
}
