/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotatea.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:40:54 by bloisel           #+#    #+#             */
/*   Updated: 2023/02/09 10:44:02 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_rotatea(t_data *dta)
{
	int		i;
	char	*tmp;

	tmp = NULL;
	i = 0;
	tmp = dta->taba[i];
	while (dta->taba[i])
	{
		dta->taba[i] = dta->taba[i + 1];
		i++;
	}
	dta->taba[i - 1] = tmp;
	ft_putendl_fd("ra", 1);
}
