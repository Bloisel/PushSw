/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:10:06 by bloisel           #+#    #+#             */
/*   Updated: 2023/01/22 15:25:09 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_swapa2(t_data *dta)
{
	int	j;
	int	l;

	j = 0;
	l = 0;
	while (dta->taba[1][j])
	{
		while (dta->tmp[0][l])
		{
		dta->taba[1][j] = dta->tmp[0][l];
		l++;
		j++;
		}
		dta->taba[1][j] = '\0';
	}
	ft_putendl_fd("sa",1);	
}

void	ft_swapa(t_data *dta)
{
	int	j;
	int	k;
	int	l;

	l = 0;
	k = 0;
	j = 0;
	while (dta->taba[0][l])
	{
		dta->tmp[0][l] = dta->taba[0][l];
		l++;
	}
	while (dta->taba[0][k])
	{
		while (dta->taba[1][j])
		{
		dta->taba[0][k] = dta->taba[1][j];
		j++;
		k++;
		}
		dta->taba[0][k] = '\0';
	}
	ft_swapa2(dta);
}
