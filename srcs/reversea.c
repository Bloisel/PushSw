/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reversea.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:02:48 by bloisel           #+#    #+#             */
/*   Updated: 2023/02/08 11:37:21 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_reversea(t_data *dta)
{
	int		i;
	char	*tmp;

	i = 0;
	while (dta->taba[i])
		i++;
	tmp = dta->taba[i - 1];
	while (--i > 0)
		dta->taba[i] = dta->taba[i - 1];
	dta->taba[0] = tmp;
	ft_putendl_fd("rra", 1);
}
