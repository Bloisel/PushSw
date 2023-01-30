/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_argc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:39:58 by bloisel           #+#    #+#             */
/*   Updated: 2023/01/30 20:49:26 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	for_3(t_data *dta)
{
	int i;
	int j;

	i = 0;
	j = -1;
	while (dta->taba[++j])
	{
	ft_pushb(dta);
	if (ft_atoi_long(dta->taba[i]) < ft_atoi_long(dta->taba[i + 1]))
		ft_pusha(dta);
	else
		ft_swapa(dta);
	ft_pusha(dta);
	if (ft_atoi_long(dta->taba[i]) < ft_atoi_long(dta->taba[i + 1]))
	{
		while (dta->taba[j])
		{
		printf("%s\n",dta->taba[j]);
		j++;
		}
		ft_exit(dta);
	}
	else
	ft_rotatea(dta);
	while (dta->taba[j])
	{
		printf("%s\n",dta->taba[j]);
		j++;
	}
	ft_exit(dta);
	}
}


void	for_2(t_data *dta)
{
	int	i;

	i = 0;
	while (ft_atoi_long(dta->taba[i]))
	{
		if (ft_atoi_long(dta->taba[i]) < ft_atoi_long(dta->taba[i + 1]))
			ft_exit(dta);
		else
			ft_swapa(dta);
	}
}

void	ft_count_argc(char **argv, int argc, t_data *dta)
{
	if (argc == 2)
		ft_exit(dta);
	if (argc == 3)
		for_2(dta);
	if (argc == 4)
	{
		for_3(dta);	
	}
	if (argc == 5)
	{
		printf("ok 5 donc 4");
	}
	if (argc == 6)
	{
		printf("ok 6 donc 5");
	}
}
