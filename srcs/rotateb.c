/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:41:05 by bloisel           #+#    #+#             */
/*   Updated: 2023/01/24 12:53:40 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_rotateb(t_data *dta)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = dta->tabb[0];
	while (dta->tabb[i])
	{
		dta->tabb[i] = dta->tabb[i + 1];
		i++;
	}
	dta->tabb[i - 1]  = tmp;
	ft_putendl_fd("ra", 1);
}
