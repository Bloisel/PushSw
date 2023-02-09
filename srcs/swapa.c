/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:10:06 by bloisel           #+#    #+#             */
/*   Updated: 2023/02/09 10:44:27 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_swapa(t_data *dta)
{
	char	*tmp;

	if (!dta->taba[0] || !dta->taba[1])
		return ;
	tmp = dta->taba[0];
	dta->taba[0] = dta->taba[1];
	dta->taba[1] = tmp;
	ft_putendl_fd("sa", 1);
}
