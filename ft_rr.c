/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:29:53 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/04 13:00:26 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_rr(t_element **pilea, t_element **pileb, int *c)
{
	int x;

	x = -1;
	*c = *c + 1;
//	ft_putstr("rr\n");
	ft_ra(pilea, &x);
	ft_rb(pileb, &x);
	return (1);
}
