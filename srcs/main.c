/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:43:20 by bloisel           #+#    #+#             */
/*   Updated: 2023/02/08 13:31:29 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	init_data(t_data *dta)
{
	dta->error = 0;
}

void	argument(t_data *dta, char **argv, int *argc)
{
	int	j;

	j = 0;
	dta->taba = ft_split(argv[1], ' ');
	dta->tmp = ft_split(argv[1], ' ');
	while (dta->taba[j])
		j++;
	dta->argc = j + 1;
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
	dta->tmp = malloc(sizeof(char *) * i);
	i = -1;
	while (argv[++i + 1])
	{
		dta->taba[i] = ft_strdup(argv[i + 1]);
		dta->tmp[i] = ft_strdup(argv[i + 1]);
	}
	while (dta->taba[j])
		j++;
	dta->taba[i] = NULL;
	dta->tmp[i] = NULL;
	dta->argc = argc;
	dta->tabb = ft_calloc(j + 1, sizeof(char *));
}

void	free_tab(char **tab)
{
	int	i;

	i = -1;
	while (tab[++i])
		if (tab[i] != NULL)
			free(tab[i]);
	if (tab != NULL)
		free(tab);
}

int	main(int argc, char **argv)
{
	t_data	dta;

	init_data(&dta);
	if (argc == 1)
		ft_exit(&dta);	
	if (argc == 2)
		argument(&dta, argv, &argc);
	if (argc > 2)
		argument2(&dta, argv, argc);
	ft_check_error(&dta);
	ft_first_sort(&dta);
	for (int i = 0; i < 3; i++){
		printf("%s		| %s\n", dta.taba[i], dta.tabb[i]);
	}
	ft_count_argc(argv, dta.argc, &dta);
	for (int i = 0; i < 3; i++){
		printf("%s		| %s\n", dta.taba[i], dta.tabb[i]);
	}
	// ft_pushb(&dta);
	// ft_pushb(&dta);
	// ft_reversea(&dta);
	// ft_pusha(&dta);
	// for (int i = 0; i < 4; i++){
	// 	printf("%s		| %s\n", dta.taba[i], dta.tabb[i]);
	// }
	// ft_count_argc(argv, argc, &dta);
	// boucle_binary(&dta);
	// ft_radix_sort(&dta);
	// free_tab(dta.tmp);
	// free_tab(dta.taba);
	// free(dta.tabb);
	// system("leaks push_swap");
	return (0);
}
