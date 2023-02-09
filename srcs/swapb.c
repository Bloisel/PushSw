/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:52:33 by bloisel           #+#    #+#             */
/*   Updated: 2023/02/09 10:45:20 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_swapb(t_data *dta)
{
	char	*tmp;

	if (!dta->tabb[0] || !dta->tabb[1])
		return ;
	tmp = dta->tabb[0];
	dta->tabb[0] = dta->tabb[1];
	dta->tabb[1] = tmp;
	ft_putendl_fd("sb", 1);
}
