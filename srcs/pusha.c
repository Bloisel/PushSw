/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pusha.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:03:50 by bloisel           #+#    #+#             */
/*   Updated: 2023/01/30 17:53:20 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_pusha(t_data *dta)
{
	int	i;

	i = 0;
	if (dta->tabb[0])
	{
		while (dta->taba[i])
			i++;
		while (--i >= 0)
			dta->taba[i + 1] = dta->taba[i];
		dta->taba[0] = dta->tabb[0];
		i = -1;
		while (dta->tabb[++i])
			dta->tabb[i] = dta->tabb[i + 1];
		ft_putendl_fd("pa", 1);
	}
}
