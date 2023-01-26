/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:02:26 by bloisel           #+#    #+#             */
/*   Updated: 2023/01/24 17:21:53 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_rrb(t_data *dta)
{
	int		i;
	char	*tmp;

	i = 0;
	while (dta->tabb[i])
		i++;
	tmp = dta->tabb[i - 1];
	while (--i >= 0)
		dta->tabb[i + 1] = dta->tabb[i];
	dta->tabb[0] = tmp;
	i = 0;
	while (dta->tabb[i])
		i++;
	dta->tabb[i - 1] = NULL;
}

void	ft_rra(t_data *dta)
{
	int		i;
	char	*tmp;

	i = 0;
	while (dta->taba[i])
		i++;
	tmp = dta->taba[i - 1];
	while (--i >= 0)
		dta->taba[i + 1] = dta->taba[i];
	dta->taba[0] = tmp;
	i = 0;
	while (dta->taba[i])
		i++;
	dta->taba[i - 1] = NULL;
}

void	ft_reverseab(t_data *dta)
{
	ft_rra(dta);
	ft_rrb(dta);
	ft_putendl_fd("rrr", 1);
}
