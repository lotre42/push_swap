/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cpypile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/01 19:05:21 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/04 14:57:33 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

t_element	*ft_cpypile(t_element *pilea)
{
	t_element *cppile;

	cppile = NULL;
	while (pilea)
	{
		ft_addend(pilea->nb, &cppile);
		pilea = pilea->next;
	}
	return (cppile);
}
