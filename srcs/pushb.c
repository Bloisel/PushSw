/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:53:15 by bloisel           #+#    #+#             */
/*   Updated: 2023/02/08 09:59:55 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_pushb(t_data *dta)
{
	int	i;

	i = 0;
	if (dta->taba[0])
	{
		while (dta->tabb[i])
			i++;
		while (--i >= 0)
			dta->tabb[i + 1] = dta->tabb[i];
		dta->tabb[0] = dta->taba[0];
		i = -1;
		while (dta->taba[++i])
			dta->taba[i] = dta->taba[i + 1];
		ft_putendl_fd("pb", 1);
	}
}
