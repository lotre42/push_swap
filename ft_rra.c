/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:37:34 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/04 13:00:21 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_rra(t_element **pilea, int *c)
{
	t_element	*tmp;
	t_element	*tmp2;
	int			nb;

	*c = *c + 1;
//	if (*c > 0)
//		ft_putstr("rra\n");
	tmp = *pilea;
	tmp2 = tmp;
	if (tmp->next)
	{
		while (tmp->next)
			tmp = tmp->next;
		nb = tmp->nb;
		while (tmp2->next->next)
			tmp2 = tmp2->next;
		tmp2->next = NULL;
		ft_add(nb, pilea);
	}
	return (1);
}
