/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pivot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 12:42:06 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/04 15:48:19 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_pivot(t_element **pilea, t_element **pileb, t_element *piletri,
		int *c)
{
	t_element *cppilea;
	t_element *cppileb;
	int		nb;
	int		end;

	cppilea = *pilea;
	cppileb = *pileb;
	nb = ft_searchpivot(piletri);
	end = ft_searchend(cppilea);
	while (cppilea->nb != end)
	{
		if (cppilea->nb <= nb)
			ft_pb(&cppilea, &cppileb, c);
		else
			ft_ra(&cppilea, c);
	}
	if (cppilea->nb <= nb)
		ft_pb(&cppilea, &cppileb, c);
	*pilea = cppilea;
	*pileb = cppileb;
	return (0);
}
