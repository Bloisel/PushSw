/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:55:41 by bloisel           #+#    #+#             */
/*   Updated: 2023/02/09 10:44:11 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_rotateab(t_data *dta)
{
	int		i;
	int		j;
	char	*tmp;
	char	*tmp2;

	i = 0;
	j = 0;
	tmp = dta->tabb[0];
	tmp2 = dta->taba[0];
	while (dta->tabb[i])
	{
		dta->tabb[i] = dta->tabb[i + 1];
		i++;
	}
	while (dta->taba[j])
	{
		dta->taba[j] = dta->taba[j + 1];
		j++;
	}
	dta->tabb[i - 1] = tmp;
	dta->taba[j - 1] = tmp2;
	ft_putendl_fd("rr", 1);
}
