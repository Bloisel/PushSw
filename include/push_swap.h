/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:43:15 by bloisel           #+#    #+#             */
/*   Updated: 2023/01/20 19:54:22 by bloisel          ###   ########.fr       */
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
	char	**tmpb;
	int		error;
}	t_data;


void	ft_pushb(t_data *dta);
void	ft_swapa(t_data *dta);
void	ft_swapab(t_data *dta);
void	ft_swapb(t_data *dta);
void	ft_exit(t_data *dta);
void	printf_error(t_data *dta, char *str);

#endif