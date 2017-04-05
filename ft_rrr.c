/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 14:43:39 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/04 13:00:09 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_rrr(t_element **pilea, t_element **pileb, int *c)
{
	int	x;
	
	x = -1;
	*c = *c + 1;
	ft_rra(pilea, &x);
	ft_rrb(pileb, &x);
	//ft_putstr("rrr\n");
	return (1);
}
