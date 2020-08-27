/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 22:05:29 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/12 13:08:59 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_increment_both(int *i, int *j)
{
	*i += 1;
	*j += 1;
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			k = i;
			while (to_find[j] && str[i] == to_find[j])
			{
				ft_increment_both(&i, &j);
			}
			if (to_find[j] == '\0')
				return (&str[k]);
			else
				i = k;
		}
		j = 0;
		i++;
	}
	return (0);
}
