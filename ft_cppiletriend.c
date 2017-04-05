/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cppiletriend.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 15:36:09 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/05 14:41:11 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

t_element	*ft_cppiletriend(t_element *piletri, int nb)
{
	t_element *cppile;

	cppile = NULL;
	while (piletri->nb != nb)
		piletri = piletri->next;
	piletri = piletri->next;
	while (piletri)
	{
		ft_addend(piletri->nb, &cppile);
		piletri = piletri->next;
	}
	return (cppile);
}
