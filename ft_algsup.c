/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algsup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/01 18:21:54 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/04 21:14:56 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int	ft_algsup(t_element **pilea, t_element *piletri, int *c)
{
	t_element *tmp;
	t_element *cppiletri;

	tmp = *pilea;
	cppiletri = piletri;
	if (cppiletri->nb == tmp->nb)
	{
		ft_ra(&tmp, c);
		*pilea = tmp;
		return (1);
	}
	else
	{
		ft_sa(&tmp, c);
		if (tmp->nb == cppiletri->nb)
		{
			ft_ra(&tmp, c);
			*pilea = tmp;
			return (1);
		}
		else
			return (ft_pushsup(pilea, cppiletri->nb, c));
	}
	return (0);
}

