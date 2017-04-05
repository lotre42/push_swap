/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 14:42:17 by kahantar          #+#    #+#             */
/*   Updated: 2017/04/04 13:00:15 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

int		ft_rrb(t_element **pileb, int *c)
{
	t_element	*tmp;
	t_element	*tmp2;
	int			nb;

	*c = *c + 1;
//	if (*c > 0)
//		ft_putstr("rrb\n");
	tmp = *pileb;
	tmp2 = tmp;
	if (tmp->next)
	{
		while (tmp->next)
			tmp = tmp->next;
		nb = tmp->nb;
		while (tmp2->next->next)
			tmp2 = tmp2->next;
		tmp2->next = NULL;
		ft_add(nb, pileb);
	}
	return (1);
}
