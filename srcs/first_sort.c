/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:27:07 by bloisel           #+#    #+#             */
/*   Updated: 2023/02/09 11:27:50 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_first_sort2(t_data *dta, int *j, int *k)
{
	if (*j >= 0)
	{
		free(dta->tmp[*j]);
		dta->tmp[*j] = ft_strdup("XxxxxX");
		free(dta->taba[*j]);
		dta->taba[*j] = ft_itoa(*k);
		*k += 1;
	}	
}

void	ft_first_sort(t_data *dta, int i, long long tmp, int j)
{
	int			k;

	k = 0;
	while (tmp != 3000000000)
	{
		i = 0;
		j = -1;
		tmp = 3000000000;
		while (dta->taba[i])
		{
			if (ft_strncmp(dta->tmp[i], "XxxxxX", 6) != 0)
			{
				if (tmp > ft_atoi_long(dta->tmp[i]))
				{
					tmp = ft_atoi_long(dta->tmp[i]);
					j = i;
				}
			}
			i++;
		}
		ft_first_sort2(dta, &j, &k);
	}
}
