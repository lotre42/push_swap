/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 14:14:17 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/04 12:59:56 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_ss(t_element **pilea, t_element **pileb, int *c)
{
	int x;

	x = -1;
	*c = *c + 1;
	ft_sa(pilea, &x);
	ft_sa(pileb, &x);
//	ft_putstr("ss\n");
	return (1);
}
