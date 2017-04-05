/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 15:36:30 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/04 13:00:37 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_ra(t_element **pilea, int *c)
{
	int			nb;
	t_element	*tmp;

	tmp = *pilea;
//	if (*c > 0)
//		ft_putstr("ra\n");
	*c = *c + 1;
	if (tmp && tmp->next)
	{
		nb = ft_cutpil(pilea);
		ft_addend(nb, pilea);
	}
	return (1);
}
