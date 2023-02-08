/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:02:34 by bloisel           #+#    #+#             */
/*   Updated: 2023/02/08 11:37:15 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_reverseb(t_data *dta)
{
	int		i;
	char	*tmp;

	i = 0;
	while (dta->tabb[i])
		i++;
	tmp = dta->tabb[i - 1];
	while (--i >= 0)
		dta->tabb[i] = dta->tabb[i - 1];
	dta->tabb[0] = tmp;
	ft_putendl_fd("rrb", 1);
}
