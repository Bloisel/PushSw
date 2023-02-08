/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:42:00 by bloisel           #+#    #+#             */
/*   Updated: 2023/02/08 11:52:50 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_check_error2(t_data *dta)
{
	int	i;
	int	j;

	i = 0;
	while (dta->taba[i])
	{
		j = 0;
		while (dta->taba[j])
		{
			if (ft_strlen(dta->taba[i]) == ft_strlen(dta->taba[j]))
			{
				if ((ft_memcmp(dta->taba[i], dta->taba[j],
							ft_strlen(dta->taba[i])) == 0) && i != j)
					printf_error(dta, "Error doublons dans les arguments\n");
			}
			j++;
		}
		if (ft_atoi_long(dta->taba[i]) > 2147483647
			|| ft_atoi_long(dta->taba[i]) < -2147483648)
			printf_error(dta, "Error mauvaise taille int\n");
		i++;
	}
}

void	ft_check_error(t_data *dta)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dta->taba[i])
	{
		j = 0;
		while (dta->taba[i][j])
		{
			if (dta->taba[i][j] == '-' && dta->taba[i][j + 1] != '-')
				j++;
			if (dta->taba[i][j] < '0' || dta->taba[i][j] > '9')
				printf_error (dta, "Error argument autre qu'un chiffre\n");
			j++;
		}
		i++;
	}
	ft_check_error2(dta);
}
