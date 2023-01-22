/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:52:33 by bloisel           #+#    #+#             */
/*   Updated: 2023/01/22 18:34:13 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_swapb2(t_data *dta)
{
	int	j;
	int	l;

	j = 0;
	l = 0;
	while (dta->tabb[1][j])
	{
		while (dta->tmp[0][l])
		{
		dta->tabb[1][j] = dta->tmp[0][l];
		l++;
		j++;
		}
		dta->tabb[1][j] = '\0';
	}
	ft_putendl_fd("sb", 1);
}

void	ft_swapb(t_data *dta)
{
	int	j;
	int	k;
	int	l;

	l = 0;
	k = 0;
	j = 0;
	while (dta->tabb[0][l])
	{
		dta->tmp[0][l] = dta->tabb[0][l];
		l++;
	}
	while (dta->tabb[0][k])
	{
		while (dta->tabb[1][j])
		{
		dta->tabb[0][k] = dta->tabb[1][j];
		j++;
		k++;
		}
		dta->tabb[0][k] = '\0';
	}
	ft_swapb2(dta);
}
