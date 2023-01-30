/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:39:46 by bloisel           #+#    #+#             */
/*   Updated: 2023/01/30 14:06:45y bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_radix_sort(t_data *dta)
{
	int	j;
	int	k;

	j = 0;
	while (dta->taba[0][j])
		j++;
	j--;
	while (j >= 0)
	{
		k = -1;
		while (dta->taba[++k])
			;
		while (k > 0)
		{
			if (dta->taba[0][j] == '0')
				ft_pushb(dta);
			else
				ft_rotatea(dta);
			k--;
		}
		while (dta->tabb[0] != NULL)
		{
			ft_pusha(dta);
		}
		j--;
	}	
}
