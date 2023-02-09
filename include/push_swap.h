/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:43:15 by bloisel           #+#    #+#             */
/*   Updated: 2023/02/09 15:12:44 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include"../lib/libft/libft.h"
# include"../lib/ft_printf/ft_printf.h"
# include "stdio.h"
# include "fcntl.h"
# include "stdlib.h"
# include "unistd.h"

typedef struct s_data
{
	char	**taba;
	char	**tabb;
	char	**tmp;
	int		la;
	int		error;
	int		maxlenbin;
	int		argc;
}	t_data;

int			ft_loop_order(t_data *dta);
void		ft_count_argc(char **argv, int argc, t_data *dta);
void		ft_radix_sort(t_data *dta);
void		boucle_binary(t_data *dta);
char		*ft_second_sort(long long nbr);
void		ft_first_sort(t_data *dta, int i, long long tmp, int j);
long long	ft_atoi_long(const char	*str);
void		ft_check_error(t_data *dta);
void		ft_reverseab(t_data *dta);
void		ft_reverseb(t_data *dta);
void		ft_reversea(t_data *dta);
void		ft_rotateab(t_data *dta);
void		ft_rotateb(t_data *dta);
void		ft_rotatea(t_data *dta);
void		ft_pusha(t_data *dta);
void		ft_pushb(t_data *dta);
void		ft_swapa(t_data *dta);
void		ft_swapab(t_data *dta);
void		ft_swapb(t_data *dta);
void		ft_exit(t_data *dta);
void		printf_error(t_data *dta, char *str);
void		for_3_second(t_data *dta);
int			for_3(t_data *dta);
void		for_5(t_data *dta);

#endif