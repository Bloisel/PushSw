/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pusha.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:03:50 by bloisel           #+#    #+#             */
/*   Updated: 2023/01/24 11:28:52 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_pusha(t_data *dta)
{
	int	i;

	i = 0;
	if (!dta->tabb[0] || !dta->tabb[1])
		return ;
	while (dta->taba[i])
		i++;
	if (i > 0)
		while (--i >= 0)
			dta->taba[i + 1] = dta->taba[i];
	i = 0;
	dta->taba[i] = dta->tabb[i];
	while (dta->tabb[i])
	{
		dta->tabb[i] = dta->tabb[i + 1];
		i++;
	}
	ft_putendl_fd("pa", 1);
}
