/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:21:30 by bloisel           #+#    #+#             */
/*   Updated: 2023/01/20 17:32:03 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_swapab2(t_data *dta)
{
	int	j;
	int	l;

	j = 0;
	l = 0;
	while (dta->tabb[1][j] && dta->taba[1][j])
	{
		while (dta->tmp[0][l] && dta->tmpb[0][l])
		{
		dta->tabb[1][j] = dta->tmpb[0][l];
		dta->taba[1][j] = dta->tmp[0][l];
		l++;
		j++;
		}
		dta->tabb[1][j] = '\0';
		dta->taba[1][j] = '\0';
	}
}

void	ft_swapab1(t_data *dta)
{
	int	k;
	int	j;

	k = 0;
	j = 0;
	while (dta->tabb[0][k] && dta->taba[0][k])
	{
		while (dta->tabb[1][j] && dta->taba[1][j])
		{
		dta->tabb[0][k] = dta->tabb[1][j];
		dta->taba[0][k] = dta->taba[1][j];
		j++;
		k++;
		}
		dta->tabb[0][k] = '\0';
		dta->taba[0][k] = '\0';
	}
	ft_swapab2(dta);
}

void	ft_swapab(t_data *dta)
{
	int	l;

	l = 0;
	while (dta->tabb[0][l] && dta->taba[0][l])
	{
		dta->tmpb[0][l] = dta->tabb[0][l];
		dta->tmp[0][l] = dta->taba[0][l];
		l++;
	}
	ft_swapab1(dta);
}
