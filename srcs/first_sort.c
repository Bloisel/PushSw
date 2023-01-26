/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:52:47 by bloisel           #+#    #+#             */
/*   Updated: 2023/01/26 18:08:35 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_first_sort(t_data *dta)
{
	int			i;
	long long	tmp;
	int			j;
	int			k;

	k = 0;
	tmp = 0;
	while (tmp != 3000000000)
	{
		i = 0;
		j = -1;
		tmp = 3000000000;
		while (dta->taba[i])
		{
			if (ft_strnstr(dta->tmp[i], "XxxxxX", 15) == NULL && tmp > ft_atoi_long(dta->tmp[i]))
			{
				tmp = ft_atoi_long(dta->tmp[i]);
				j = i;
			}
			i++;
		}
		if (j >= 0)
		{
			free(dta->tmp[j]);
			free(dta->taba[j]);
			dta->tmp[j] = ft_strdup("XxxxxX");
			dta->taba[j] = ft_itoa(k);
			k++;
		}
	}
}
