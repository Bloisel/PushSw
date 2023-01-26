/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:43:15 by bloisel           #+#    #+#             */
/*   Updated: 2023/01/26 18:33:25 by bloisel          ###   ########.fr       */
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
	int		error;
}	t_data;


void    	ft_second_sort(t_data *dta, long long nb, char *base);
void    	ft_first_sort(t_data *dta);
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

#endif