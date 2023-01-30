/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boucle_binary.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:42:24 by bloisel           #+#    #+#             */
/*   Updated: 2023/01/30 11:42:28 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	good_len_binary(t_data *dta)
{
	int		i;
	char	*tmp;

	tmp = NULL;
	i = 0;
	while (dta->taba[i])
	{
		while (ft_strlen(dta->taba[i]) < dta->maxlenbin)
		{
		tmp = ft_strjoin("0", dta->taba[i]);
			free(dta->taba[i]);
		dta->taba[i] = tmp;
		}
		i++;
	}
}

void	len_binary(t_data *dta)
{
	int	i;

	i = 0;
	dta->maxlenbin = 0;
	while (dta->taba[i])
	{
		if (ft_strlen(dta->taba[i]) > dta->maxlenbin)
			dta->maxlenbin = ft_strlen(dta->taba[i]);
		i++;
	}
	good_len_binary(dta);
}

void	boucle_binary(t_data *dta)
{
	int		i;
	char	*tmp;

	i = 0;
	while (dta->taba[i])
	{
		tmp = dta->taba[i];
		dta->taba[i] = ft_second_sort(ft_atoi_long(dta->taba[i]));
		free(tmp);
		i++;
	}
	len_binary(dta);
}
