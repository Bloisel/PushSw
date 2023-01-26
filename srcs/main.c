/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:43:20 by bloisel           #+#    #+#             */
/*   Updated: 2023/01/26 18:42:17 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	init_data(t_data *dta)
{
	dta->error = 0;
}

void	argument(t_data *dta, char **argv, int argc)
{
	int	j;

	j = 0;
	dta->taba = ft_split(argv[1], ' ');
	dta->tmp = ft_split(argv[1], ' ');
	while (dta->taba[j])
		j++;
	dta->tabb = ft_calloc(j + 1, sizeof(char *));
}

void	argument2(t_data *dta, char **argv, int argc)
{
	int	j;
	int	i;

	j = 0;
	i = -1;
	while (argv[++i])
		;
	dta->taba = malloc(sizeof(char *) * i);
	i = -1;
	while (argv[++i + 1])
		dta->taba[i] = ft_strdup(argv[i + 1]);
	while (dta->taba[j])
		j++;
	dta->tabb = ft_calloc(j + 1, sizeof(char *));
}

int	main(int argc, char **argv)
{
	t_data	dta;
	int		i;

	init_data(&dta);
	if (argc == 1)
		printf_error(&dta, "no valid argument");
	if (argc == 2)
	{
		argument(&dta, argv, argc);
	}
	if (argc > 2)
		argument2(&dta, argv, argc);	
	ft_check_error(&dta);
	i = -1;
	// ft_pushb(&dta);
	// ft_pushb(&dta);
	// ft_pushb(&dta);
	// ft_reverseab(&dta);
	ft_printf("---------\n");
	while (++i < 6) // taille 6 = ma chaine a modifier en fonction 
		ft_printf("%s	|	%s\n", dta.taba[i], dta.tabb[i]);
	ft_printf("-----------------------------------\n");
	// ft_swapa(&dta);
	// ft_swapab(&dta);
	// ft_rotatea(&dta);
	// ft_reverseab(&dta);
	// int num = 87;
	// int num1 = 781;
	// printf("%d\n", num1>>2);
	// printf("%d\n", num>>2);
	// printf("mon num en bi %d\n", 78&1);
	// printf("mon num en bi %d\n", 8&7);
	ft_first_sort(&dta);
	ft_second_sort(&dta, ft_atoi_long(dta.taba[i]), "01");
	i = -1;
	ft_printf("-----------------------------------\n");
	while (++i < 6)
		ft_printf("%s	|	%s\n", dta.taba[i], dta.tabb[i]);
	ft_printf("---------\n");
	return (0);
}
