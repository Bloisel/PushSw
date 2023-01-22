/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:43:20 by bloisel           #+#    #+#             */
/*   Updated: 2023/01/22 18:32:42 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	init_data(t_data *dta)
{
	dta->error = 0;
}

void	argument(t_data *dta, char **argv, int argc)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	dta->taba = ft_split(argv[1], ' ');
	dta->tmp = ft_split(argv[1], ' ');
	while (dta->taba[j])
	{
		j++;
	}
	dta->tabb = malloc(sizeof(char *) * j);
	ft_swapa(dta);
	ft_printf("%s\n",dta->taba[i]);
	ft_pushb(dta);
	ft_printf("premier push :%s\n",dta->tabb[i]);
	ft_pushb(dta);
	ft_printf("second push :%s\n",dta->tabb[i]);
	ft_pushb(dta);
	ft_swapb(dta);
	ft_printf("swap :%s\n",dta->tabb[i]);
	ft_swapab(dta);
	ft_printf("swap a et b :%s\n",dta->tabb[i]);
}

int	main(int argc, char **argv)
{
	t_data	dta;
	int		i;

	i = 0;
	init_data(&dta);
	if (argc == 1)
		printf_error(&dta, "no valid argument");
	if (argc == 2)
	{
		argument(&dta, argv, argc);
	}
	// if (argc > 2)
	// 	argument2(&dta, argv, argc);	
	return (0);
}
