/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placement.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 18:02:14 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/04 21:32:04 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_placement(t_element *pilea, t_element *piletri)
{
	t_element *cppilea;
	t_element *cppiletri;

	if (!pilea)
		return (0);
	cppilea = pilea;
	cppiletri = piletri;
	while (cppiletri)
	{
		if (cppilea->nb != cppiletri->nb)
			return (0);
		cppilea = cppilea->next;
		cppiletri = cppiletri->next;
	}
	return (1);
}
