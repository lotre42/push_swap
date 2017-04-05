/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alginf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/01 18:22:07 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/04 12:30:55 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

void		ft_alginf(t_element **pilea, t_element *piletri, t_element **pileb,
		int *c)
{
	t_element *tmp;
	t_element *cppiletri;

	tmp = *pilea;
	cppiletri = piletri;
	while (cppiletri->nb == tmp->nb)
		cppiletri = cppiletri->next;
	while (tmp->nb != piletri->nb)
	{
		tmp = *pilea;
		while (tmp->next)
			tmp = tmp->next;
		if (tmp->nb == cppiletri->nb)
			ft_pb(&tmp, pileb, c);
	}
}

