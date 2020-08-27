/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 23:23:41 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/26 23:26:00 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
void ft_show_tab(struct s_stock_str *par);
struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int	main(int ac, char **av)
{
	ft_show_tab(ft_strs_to_tab(ac - 1, av + 1));
	return(0);
}
