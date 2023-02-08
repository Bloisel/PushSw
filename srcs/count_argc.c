/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_argc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:39:58 by bloisel           #+#    #+#             */
/*   Updated: 2023/02/08 13:57:01 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	for_4(t_data *dta)
{
	int	i;

	i = 0;
	while (i < 1)
	{
		if (ft_atoi(dta->taba[0]) == 3)
		{
			ft_pushb(dta);
			i++;
		}
		ft_rotatea(dta);
	}
	for_3(dta);
	ft_pusha(dta);
	ft_rotatea(dta);
}

void	for_3_second(t_data *dta)
{
	int	j;

	j = 0;
	if (((ft_atoi(dta->taba[j]) == 0) 
			&& ft_atoi(dta->taba[j + 1]) == 2)
		&& ft_atoi(dta->taba[j + 2]) == 1)
	{
		ft_reversea(dta);
		ft_swapa(dta);
	}
	if (((ft_atoi(dta->taba[j]) == 1) 
			&& ft_atoi(dta->taba[j + 1]) == 2)
		&& ft_atoi(dta->taba[j + 2]) == 0)
		ft_reversea(dta);
	if (((ft_atoi(dta->taba[j]) == 2) 
			&& ft_atoi(dta->taba[j + 1]) == 0)
		&& ft_atoi(dta->taba[j + 2]) == 1)
		ft_rotatea(dta);
}

int	for_3(t_data *dta)
{
	int	j;

	j = 0;
	if (((ft_atoi(dta->taba[j]) == 0) 
			&& ft_atoi(dta->taba[j + 1]) == 1)
		&& ft_atoi(dta->taba[j + 2]) == 2)
		return (0);
	if (((ft_atoi(dta->taba[j]) == 1) 
			&& ft_atoi(dta->taba[j + 1]) == 0)
		&& ft_atoi(dta->taba[j + 2]) == 2)
		ft_swapa(dta);
	if (((ft_atoi(dta->taba[j]) == 2) 
			&& ft_atoi(dta->taba[j + 1]) == 1)
		&& ft_atoi(dta->taba[j + 2]) == 0)
	{
		ft_rotatea(dta);
		ft_swapa(dta);
	}
	for_3_second(dta);
	return (0);
}

void	for_2(t_data *dta)
{
	int	i;

	i = 0;
	while (ft_atoi_long(dta->taba[i]))
	{
		if (ft_atoi_long(dta->taba[i]) < ft_atoi_long(dta->taba[i + 1]))
			ft_exit(dta);
		else
			ft_swapa(dta);
	}
}

void	ft_count_argc(char **argv, int argc, t_data *dta)
{
	if (argc == 2)
		ft_exit(dta);
	else if (argc == 3)
		for_2(dta);
	else if (argc == 4)
		for_3(dta);
	else if (argc == 5)
	{
		for_4(dta);
	}
	else if (argc == 6)
	{
		for_5(dta);
	}
	else
	{
		boucle_binary(dta);
		ft_radix_sort(dta);
	}
}
