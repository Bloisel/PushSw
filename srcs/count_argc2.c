/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_argc2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:56:20 by bloisel           #+#    #+#             */
/*   Updated: 2023/02/08 13:56:23 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	for_5bis(t_data *dta)
{
	for_3(dta);
	ft_pusha(dta);
	ft_pusha(dta);
	if (ft_atoi(dta->taba[0]) == 4)
	{
		ft_swapa(dta);
		ft_rotatea(dta);
		ft_rotatea(dta);
	}
	else
	{
		ft_rotatea(dta);
		ft_rotatea(dta);
	}	
}

void	for_5(t_data *dta)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if (ft_atoi(dta->taba[0]) == 3 || ft_atoi(dta->taba[0]) == 4)
		{
			ft_pushb(dta);
			i++;
		}
		ft_rotatea(dta);
	}
	for_5bis(dta);
}