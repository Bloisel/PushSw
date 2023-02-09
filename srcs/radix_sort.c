/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:46:00 by bloisel           #+#    #+#             */
/*   Updated: 2023/02/09 10:50:39 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_radix_sort2(t_data *dta, int j, int k)
{
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

void	ft_radix_sort(t_data *dta)
{
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (dta->taba[0][j])
		j++;
	j--;
	ft_radix_sort2(dta, j, k);
}
