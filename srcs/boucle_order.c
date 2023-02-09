/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boucle_order.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:09:17 by bloisel           #+#    #+#             */
/*   Updated: 2023/02/09 17:34:45 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_loop_order(t_data *dta)
{
	int	i;

	i = 1;
	while (dta->taba[i])
	{
		if (ft_atoi_long(dta->taba[i]) < ft_atoi_long(dta->taba[i - 1]))
			return (0);
		i++;
	}
	ft_exit(dta);
	return (0);
}
