/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:12:16 by bloisel           #+#    #+#             */
/*   Updated: 2023/01/29 16:45:27 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_convert_base(long long nbr)
{
	int		i;
	int		j;
	char	*base;

	j = 0;
	i = 0;
	base = "01";
	i = ft_strlen(base);
	while (nbr >= i)
	{
		j++;
		nbr /= i;
	}
	if (nbr == i)
		j++;
	j++;
	return (j);
}

char	*ft_second_sort(long long nbr)
{
	int		j;
	char	*str;
	char	*base;

	base = "01";
	j = ft_convert_base(nbr);
	str = malloc(sizeof(char) * j + 1);
	str[j] = '\0';
	j--;
	while (nbr >= 2)
	{
		str[j] = base[nbr % 2];
		nbr /= 2;
		j--;
	}
	str[j] = base[nbr % 2];
	return (str);
}
