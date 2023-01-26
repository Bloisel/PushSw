/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:21:30 by bloisel           #+#    #+#             */
/*   Updated: 2023/01/24 11:32:57 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_swapab(t_data *dta)
{
	char	*tmp;
	char	*tmpb;

	if ((!dta->tabb[0] || !dta->tabb[1]) && (!dta->taba[0] || !dta->taba[1]))
		return ;
	tmp = dta->taba[0];
	dta->taba[0] = dta->taba[1];
	dta->taba[1] = tmp;
	tmpb = dta->tabb[0];
	dta->tabb[0] = dta->tabb[1];
	dta->tabb[1] = tmpb;
	ft_putendl_fd("ss", 1);
}
