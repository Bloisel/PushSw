/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:53:15 by bloisel           #+#    #+#             */
/*   Updated: 2023/01/24 11:16:59 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_pushb(t_data *dta)
{
	int	i;

	i = 0;
	if (!dta->taba[0] || !dta->taba[1])
		return ;
	while (dta->tabb[i])
		i++;
	if (i > 0)
		while (--i >= 0)
			dta->tabb[i + 1] = dta->tabb[i];
	i = 0;
	dta->tabb[i] = dta->taba[i];
	while (dta->taba[i])
	{
		dta->taba[i] = dta->taba[i + 1];
		i++;
	}
	ft_putendl_fd("pb", 1);
}
