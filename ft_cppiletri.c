/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cppiletri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 15:07:17 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/05 14:40:51 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

t_element	*ft_cppiletri(t_element *piletri, int nb)
{
	t_element *cppile;

	cppile = NULL;
	while (piletri->nb != nb)
	{
		ft_add(piletri->nb, &cppile);
		piletri = piletri->next;
	}
	ft_add(piletri->nb, &cppile);
	return (cppile);
}
